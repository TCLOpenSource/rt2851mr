/*
 * $Id: RPCintr.c,v 1.10 2004/8/4 09:25 Jacky Exp $
 */
#include <generated/autoconf.h>
/*
#if defined(CONFIG_MODVERSIONS) && !defined(MODVERSIONS)
    #define MODVERSIONS
#endif

#ifdef MODVERSIONS
    #include <linux/modversions.h>
#endif

#ifndef MODULE
#define MODULE
#endif
*/
#include <linux/module.h>
#include <linux/kernel.h>	/* printk() */
#include <linux/slab.h>		/* kmalloc() */
#include <linux/fs.h>		/* everything... */
#include <linux/errno.h>	/* error codes */
#include <linux/types.h>	/* size_t */
#include <linux/proc_fs.h>
#include <linux/fcntl.h>	/* O_ACCMODE */
#include <linux/ioctl.h>	/* needed for the _IOW etc stuff used later */
#include <linux/sched.h>
#include <linux/delay.h>
#include <linux/freezer.h>
#include <rtk_kdriver/RPCDriver.h>

#include <asm/io.h>
#include <linux/uaccess.h>	/* copy_to_user() copy_from_user() */


#ifdef CONFIG_ARM64_RPC
RPC_INTR_Dev rpc_intr_devices[RPC_INTR_DEV_TOTAL];
#ifdef CONFIG_REALTEK_RPC_KCPU
RPC_INTR_Dev rpc_intr_kcpu_devices[RPC_INTR_DEV_KCPU_TOTAL];
#endif
#else
RPC_INTR_Dev *rpc_intr_devices;
#ifdef CONFIG_REALTEK_RPC_KCPU
RPC_INTR_Dev *rpc_intr_kcpu_devices;
#endif
#endif
int rpc_intr_is_paused;

int timeout = HZ / 40;		/* jiffies */

#ifdef CONFIG_REALTEK_RPC_MULTIPROCESS

RPC_DEV_EXTRA rpc_intr_extra[RPC_NR_DEVS / RPC_NR_PAIR];
#ifdef CONFIG_REALTEK_RPC_KCPU
RPC_DEV_EXTRA rpc_intr_kcpu_extra[RPC_NR_KCPU_DEVS / RPC_NR_PAIR];
static DEFINE_SEMAPHORE(intr_rpc_sem_read);
static DEFINE_SEMAPHORE(intr_rpc_sem_write);
#endif
int rpc_pr_pid_debug = 0;


#ifdef CONFIG_ARM64_RPC
/*This function may be called by tasklet and rpc_intr_read(), rpc_poll_read()*/
void rpc_dispatch(unsigned long data)
{
	RPC_DEV_EXTRA *extra = (RPC_DEV_EXTRA *) data;
	RPC_COMMON_Dev *dev = extra->dev;
	RPC_PROCESS *proc = NULL;
	char *out;
	RPC_STRUCT rpc;
	int found = 0;
    int state = 0;


	PDEBUG("==*==*==*==*== %s Out:%p next:%p In:%p size:%d %s==*==*==*==*==\n",extra->name, (char *)get_rpc_addr(dev->ringOut), extra->nextRpc, (char *)get_rpc_addr(dev->ringIn),get_ring_data_size((char *)get_rpc_addr(dev->ringStart), (char *)get_rpc_addr(dev->ringEnd), (char *)get_rpc_addr(dev->ringIn),(char *)get_rpc_addr(dev->ringOut)), in_atomic() ?  "atomic" : "");

	if (ring_empty(dev)) {
		if (!rpc_done(extra)) {
			update_nextRpc(extra, (char *)get_rpc_addr(dev->ringOut));
			PDEBUG("%s:%d No data, update nextRpc:%p\n",
			       extra->name, __LINE__, extra->nextRpc);
		}
		return;
	}

	if (!rpc_done(extra)) {
		PDEBUG("%s:%d prev RPC hasn't finished. Out:%p next:%p In:%p\n",
		       extra->name, __LINE__, dev->ringOut, extra->nextRpc,
		       dev->ringIn);
		return;
	}

	/*peek_rpc_struct(extra->name, dev); */
	out = (char *)get_rpc_addr(dev->ringOut);
	out =
	    get_ring_data(extra->name, dev, out, (char *)&rpc,
			  sizeof(RPC_STRUCT));
	if (out == NULL)
		return;

	convert_rpc_struct(extra->name, &rpc);
#ifdef CONFIG_DEBUG_RPC_DISPATCH
	show_rpc_struct(extra->name, &rpc);
#endif
	/*show_rpc_struct(extra->name, &rpc);
	   BUG_ON(rpc.programID != R_PROGRAM && rpc.programID != REPLYID && rpc.programID != AUDIO_AGENT && rpc.programID != VIDEO_AGENT); */

	if (rpc.programID == R_PROGRAM) {
#ifdef CONFIG_REALTEK_RPC_PROGRAM_REGISTER
		proc = pick_supported_proc(extra, rpc.programID,0,0,0);
#else
		proc = pick_one_proc(extra);
#endif
	} else if (rpc.programID == REPLYID && rpc.versionID == REPLYID
		   && rpc.parameterSize >= sizeof(unsigned int)) {
		unsigned int taskID;

		if (get_ring_data
		    (extra->name, dev, out, (char *)&taskID,
		     sizeof(unsigned int)) == NULL)
			return;

		taskID = ntohl(taskID);
		PDEBUG("%s:%d taskID:%lu\n", extra->name, __LINE__, taskID);

		proc = lookup_by_taskID(extra, taskID, &state, 0);
	} else {
        int print_message = 0;
        if(rpc.programID == AUDIO_AGENT) print_message = 1;
		proc = NULL;
		if (likely(rpc.sysPID != 0xFFFFFFFF))
			proc = lookup_by_taskID(extra, rpc.sysPID, &state, print_message);
		if (unlikely(proc == NULL)) {
#ifdef CONFIG_REALTEK_RPC_PROGRAM_REGISTER
			proc = pick_supported_proc(extra, rpc.programID,rpc.sysPID, state, print_message);
#else
			proc = pick_one_proc(extra);
#endif
		}
	}

	if (proc) {
		found = 1;
	} else {
#ifdef CONFIG_DEBUG_RPC_DISPATCH
		printk
		    ("%s:%d can't find process for handling %s programID:%lu\n",
		     extra->name, __LINE__, extra->name, rpc.programID);
#endif
	}

	out += rpc.parameterSize;
	if (out >= (char *)get_rpc_addr(dev->ringEnd))
		out = (char *)(get_rpc_addr(dev->ringStart)) + (out - (char *)get_rpc_addr(dev->ringEnd));

	if (found) {
		update_nextRpc(extra, out);
		update_currProc(extra, proc);
		wake_up_interruptible(&proc->waitQueue);
#ifdef CONFIG_DEBUG_RPC_DISPATCH
		printk
		    ("%s:%d Wakeup process:%d and update nextRpc:%p for programID:%lu\n",
		     extra->name, __LINE__, proc->pid, extra->nextRpc,
		     rpc.programID);
#endif
	} else {
		update_currProc(extra, NULL);
	}
}

int rpc_intr_init(void)
{
	static int is_init;
	int result = 0, i;

	/* Create corresponding structures for each device. */
	//rpc_intr_devices = (RPC_INTR_Dev *) get_rpc_addr(RPC_INTR_RECORD_ADDR);
	pr_alert("PAGE_OFFSET = %lx\n", PAGE_OFFSET);

	for (i = 0; i < RPC_INTR_DEV_TOTAL; i++) {
		rpc_intr_devices[i].dev = (RPC_RECORE_Dev *)get_rpc_addr(RPC_INTR_RECORD_ADDR + i *RPC_RECORD_ADDR_SIZE);
		PDEBUG("rpc_intr_device %d addr: %x \n", i,
		       (unsigned)&(rpc_intr_devices[i].dev));
		//rpc_intr_devices[i].ringBuf =(unsigned long)(get_rpc_addr(RPC_INTR_DEV_ADDR +i * RPC_RING_SIZE * 2)) & 0xFFFFFFFF;
		rpc_intr_devices[i].dev->ringBuf =(RPC_INTR_DEV_ADDR +i * RPC_RING_SIZE * 2);
		/* Initialize pointers... */
		rpc_intr_devices[i].dev->ringStart = rpc_intr_devices[i].dev->ringBuf;
		rpc_intr_devices[i].dev->ringEnd =
		    rpc_intr_devices[i].dev->ringBuf + RPC_RING_SIZE;
		rpc_intr_devices[i].dev->ringIn = rpc_intr_devices[i].dev->ringBuf;
		rpc_intr_devices[i].dev->ringOut = rpc_intr_devices[i].dev->ringBuf;

		PDEBUG("The %dth RPC_INTR_Dev:\n", i);
		PDEBUG("RPC ringStart: 0x%8x\n",
		       (unsigned int)rpc_intr_devices[i].dev->ringStart);
		PDEBUG("RPC ringEnd:   0x%8x\n",
		       (unsigned int)rpc_intr_devices[i].dev->ringEnd);
		PDEBUG("RPC ringIn:    0x%8x\n",
		       (unsigned int)rpc_intr_devices[i].dev->ringIn);
		PDEBUG("RPC ringOut:   0x%8x\n",
		       (unsigned int)rpc_intr_devices[i].dev->ringOut);
		PDEBUG("\n");

		rpc_intr_extra[i].nextRpc =(char *)get_rpc_addr(rpc_intr_devices[i].dev->ringOut);
		rpc_intr_extra[i].currProc = NULL;

		if (!is_init) {
			rpc_intr_devices[i].ptrSync =
			    kmalloc(sizeof(RPC_SYNC_Struct), GFP_KERNEL);

			/* Initialize wait queue... */
			init_waitqueue_head(&
					    (rpc_intr_devices[i].ptrSync->
					     waitQueue));

			/* Initialize sempahores... */
			sema_init(&rpc_intr_devices[i].ptrSync->readSem, 1);
			sema_init(&rpc_intr_devices[i].ptrSync->writeSem, 1);

			//rpc_intr_extra[i].dev = (void *)&(rpc_intr_devices[i].dev);
			rpc_intr_extra[i].dev = (void *)(rpc_intr_devices[i].dev);
			INIT_LIST_HEAD(&rpc_intr_extra[i].tasks);
			tasklet_init(&rpc_intr_extra[i].tasklet, rpc_dispatch,
				     (unsigned long)&rpc_intr_extra[i]);
			spin_lock_init(&rpc_intr_extra[i].lock);
			switch (i) {
			case 0:
				rpc_intr_extra[i].name = "AudioIntrWrite";
				break;
			case 1:
				rpc_intr_extra[i].name = "AudioIntrRead";
				break;
			case 2:
				rpc_intr_extra[i].name = "Video1IntrWrite";
				break;
			case 3:
				rpc_intr_extra[i].name = "Video1IntrRead";
				break;
			case 4:
				rpc_intr_extra[i].name = "Video2IntrWrite";
				break;
			case 5:
				rpc_intr_extra[i].name = "Video2IntrRead";
				break;
			}
		}
	}

#ifdef CONFIG_REALTEK_RPC_KCPU
	/* Create corresponding structures for each device. */
	//rpc_intr_kcpu_devices =(RPC_INTR_Dev *) get_rpc_addr(RPC_INTR_KCPU_RECORD_ADDR);

	for (i = 0; i < RPC_INTR_DEV_KCPU_TOTAL; i++) {
		rpc_intr_kcpu_devices[i].dev = (RPC_RECORE_Dev *)get_rpc_addr(RPC_INTR_KCPU_RECORD_ADDR + i *RPC_RECORD_ADDR_SIZE);
		PDEBUG("rpc_intr_kcpu_device %d addr: %x \n", i,
		       (unsigned)&(rpc_intr_kcpu_devices[i].dev));
		rpc_intr_kcpu_devices[i].dev->ringBuf =(RPC_INTR_KCPU_DEV_ADDR +i * RPC_KCPU_RING_SIZE * 2);

		/* Initialize pointers... */
		rpc_intr_kcpu_devices[i].dev->ringStart =
		    rpc_intr_kcpu_devices[i].dev->ringBuf;
		rpc_intr_kcpu_devices[i].dev->ringEnd =
		    rpc_intr_kcpu_devices[i].dev->ringBuf + RPC_KCPU_RING_SIZE;
		rpc_intr_kcpu_devices[i].dev->ringIn =
		    rpc_intr_kcpu_devices[i].dev->ringBuf;
		rpc_intr_kcpu_devices[i].dev->ringOut =
		    rpc_intr_kcpu_devices[i].dev->ringBuf;

		PDEBUG("The %dth RPC_INTR_Dev:\n", i);
		PDEBUG("RPC ringStart: 0x%8x\n",
		       (int)rpc_intr_kcpu_devices[i].dev->ringStart);
		PDEBUG("RPC ringEnd:   0x%8x\n",
		       (int)rpc_intr_kcpu_devices[i].dev->ringEnd);
		PDEBUG("RPC ringIn:    0x%8x\n",
		       (int)rpc_intr_kcpu_devices[i].dev->ringIn);
		PDEBUG("RPC ringOut:   0x%8x\n",
		       (int)rpc_intr_kcpu_devices[i].dev->ringOut);
		PDEBUG("\n");

		rpc_intr_kcpu_extra[i].nextRpc =(char *)get_rpc_addr(rpc_intr_kcpu_devices[i].dev->ringOut);

		rpc_intr_kcpu_extra[i].currProc = NULL;

		if (!is_init) {
			rpc_intr_kcpu_devices[i].ptrSync =
			    kmalloc(sizeof(RPC_SYNC_Struct), GFP_KERNEL);

			/* Initialize wait queue... */
			init_waitqueue_head(&
					    (rpc_intr_kcpu_devices[i].ptrSync->
					     waitQueue));

			/* Initialize sempahores... */
			sema_init(&rpc_intr_kcpu_devices[i].ptrSync->readSem,
				  1);
			sema_init(&rpc_intr_kcpu_devices[i].ptrSync->writeSem,
				  1);

			rpc_intr_kcpu_extra[i].dev =
			    (void *)rpc_intr_kcpu_devices[i].dev;
			INIT_LIST_HEAD(&rpc_intr_kcpu_extra[i].tasks);
			tasklet_init(&rpc_intr_kcpu_extra[i].tasklet,
				     rpc_dispatch,
				     (unsigned long)&rpc_intr_kcpu_extra[i]);
			spin_lock_init(&rpc_intr_kcpu_extra[i].lock);
			switch (i) {
			case 0:
				rpc_intr_kcpu_extra[i].name = "KCPUIntrWrite";
				break;
			case 1:
				rpc_intr_kcpu_extra[i].name = "KCPUIntrRead";
				break;
			}
		}
	}
#endif

	is_init = 1;
	rpc_intr_is_paused = 0;

	return result;
}

int rpc_intr_pause(void)
{
	rpc_intr_is_paused = 1;

	return 0;
}

void rpc_intr_cleanup(void)
{
	int i;

	/* Clean corresponding structures for each device. */
		/* Clean ring buffers. */
	for (i = 0; i < RPC_INTR_DEV_TOTAL; i++) {
		kfree(rpc_intr_devices[i].ptrSync);
	}

	return;
}

int rpc_intr_open(struct inode *inode, struct file *filp)
{
	int minor = MINOR(inode->i_rdev);

	PDEBUG("RPC intr open with minor number: %d\n", minor);

	if (!filp->private_data) {
		RPC_PROCESS *proc = kmalloc(sizeof(RPC_PROCESS), GFP_KERNEL);
		if (proc == NULL) {
			printk("%s: failed to allocate RPC_PROCESS\n",
			       __func__);
			return -ENOMEM;
		}
#ifdef CONFIG_REALTEK_RPC_KCPU
		if (minor >= RPC_NR_DEVS) {
			proc->dev =
			    (RPC_COMMON_Dev *) &
			    rpc_intr_kcpu_devices[(minor -
						   RPC_NR_DEVS) / RPC_NR_PAIR];
			proc->extra =
			    &rpc_intr_kcpu_extra[(minor -
						  RPC_NR_DEVS) / RPC_NR_PAIR];
		} else {
			proc->dev =
			    (RPC_COMMON_Dev *)&rpc_intr_devices[minor /
								  RPC_NR_PAIR];
			proc->extra = &rpc_intr_extra[minor / RPC_NR_PAIR];
		}
#else
		proc->dev =
		    (RPC_COMMON_Dev *)&rpc_intr_devices[minor / RPC_NR_PAIR];
		proc->extra = &rpc_intr_extra[minor / RPC_NR_PAIR];
#endif

		proc->pid = current->tgid;	/*current->tgid = process id, current->pid = thread id */
		init_waitqueue_head(&proc->waitQueue);
		INIT_LIST_HEAD(&proc->threads);
#ifdef CONFIG_REALTEK_RPC_PROGRAM_REGISTER
		INIT_LIST_HEAD(&proc->handlers);
#endif
		list_add(&proc->list, &proc->extra->tasks);
		PDEBUG
		    ("%s: Current process pid:%d tgid:%d => %d(%p) for %s(%p)\n",
		     __func__, current->pid, current->tgid, proc->pid,
		     &proc->waitQueue, proc->extra->name, proc->dev);

		filp->private_data = proc;
		filp->f_pos = (loff_t) minor;
	}

/*	MOD_INC_USE_COUNT;  Before we maybe sleep */

	return 0;		/* success */
}

int rpc_intr_release(struct inode *inode, struct file *filp)
{
	int minor = MINOR(inode->i_rdev);

	RPC_PROCESS *proc = filp->private_data;
	RPC_INTR_Dev *dev = (RPC_INTR_Dev *) proc->dev;	/* the first listitem */
	RPC_DEV_EXTRA *extra = proc->extra;

	if (extra->currProc == proc) {
		PDEBUG("%s: clear %s(%p) current process\n", __func__,
		       proc->extra->name, dev);
		update_currProc(extra, NULL);
		if (minor == 3 || minor == 7 || minor == 11
#ifdef CONFIG_REALTEK_RPC_KCPU
		    || minor == 15
#endif
		    ) {		/*intr read device (ugly code) */
			if (!rpc_done(extra)) {
				printk
				    ("%s: previous rpc hasn't finished, force clear!! ringOut %x => %p\n",
				     __func__, dev->dev->ringOut, extra->nextRpc);
				if (down_interruptible(&dev->ptrSync->readSem))
					return -ERESTARTSYS;
				dev->dev->ringOut = (u32)rpc_pa(extra->nextRpc);
				up(&dev->ptrSync->readSem);
			}
		}
	}
#ifdef CONFIG_REALTEK_RPC_PROGRAM_REGISTER
    {
    	/*unregister myself from handler list */
    	RPC_HANDLER *handler, *hdltmp;
    	list_for_each_entry_safe(handler, hdltmp, &proc->handlers, list) {
    		list_del(&handler->list);
    		kfree(handler);
    	}
    }
#endif

	/*remove myself from task list */
	tasklet_disable(&extra->tasklet);
	list_del(&proc->list);
	tasklet_enable(&extra->tasklet);
	kfree(proc);

	PDEBUG("RPC intr close with minor number: %d\n", minor);

/*	MOD_DEC_USE_COUNT; */

	return 0;		/* success */
}
/* We don't need parameter f_pos here...
// note: rpc_intr_read support both blocking & nonblocking modes*/
ssize_t rpc_intr_read(struct file *filp, char *buf, size_t count,
		      loff_t *f_pos)
{
	RPC_PROCESS *proc = filp->private_data;
	RPC_INTR_Dev *dev = (RPC_INTR_Dev *) proc->dev;	/* the first listitem */
	RPC_DEV_EXTRA *extra = proc->extra;
	int temp, size;
	ssize_t ret = 0;
	u32 ptmp;
	int rpc_ring_size = dev->dev->ringEnd - dev->dev->ringStart;

	PDEBUG("%s:%d thread:%s pid:%d tgid:%d device:%s\n", __func__, __LINE__,
	       current->comm, current->pid, current->tgid, extra->name);
	if (rpc_intr_is_paused) {
		printk
		    ("RPCintr: someone access rpc intr during the pause...\n");
		msleep(1000);
		return -EAGAIN;
	}

	if (need_dispatch(extra)) {
		tasklet_disable(&extra->tasklet);
		spin_lock_bh(&extra->lock);
		if (need_dispatch(extra)) {
			rpc_dispatch((unsigned long)extra);
		}
		spin_unlock_bh(&extra->lock);
		tasklet_enable(&extra->tasklet);
	}

	PDEBUG("%s: dev:%s(%p) currProc:%p\n", __func__, extra->name, dev,
	       extra->currProc);
	if ((extra->currProc != proc) || (ring_empty((RPC_COMMON_Dev *)( dev->dev)))) {
		if (filp->f_flags & O_NONBLOCK)
			goto done;
wait_again:
		if (wait_event_interruptible_timeout(proc->waitQueue,
						     (extra->currProc == proc)
						     &&
						     (!ring_empty
						      ((RPC_COMMON_Dev *) (dev->dev))),
						     timeout) == 0)
			goto done;	/* timeout */
/*
//              if (current->flags & PF_FREEZE) {
//                      refrigerator(PF_FREEZE);
//                      if (!signal_pending(current))
//                              goto wait_again;
//              }
*/
		if (try_to_freeze()) {
			if (!signal_pending(current))
				goto wait_again;
		}

		if (signal_pending(current)) {
			PDEBUG
			    ("RPC deblock because of receiving a signal...\n");
			goto done;
		}
	}

	if (down_interruptible(&dev->ptrSync->readSem))
		return -ERESTARTSYS;

	if (dev->dev->ringIn > dev->dev->ringOut)
		size = dev->dev->ringIn - dev->dev->ringOut;
	else
		size = rpc_ring_size + dev->dev->ringIn - dev->dev->ringOut;

	PDEBUG("%s: %s: count:%d size:%d\n", __func__, extra->name, count,
	       size);
	/*peek_rpc_struct(__func__, dev); */
	if (count > size) {
		count = size;
	}

	temp = dev->dev->ringEnd - dev->dev->ringOut;
	if (temp >= count) {
		if (my_copy_to_user((int *)buf, (int *)get_rpc_addr(dev->dev->ringOut), count)) {
			ret = -EFAULT;
			goto out;
		}
		ret += count;
		ptmp = dev->dev->ringOut + ((count + 3) & 0xfffffffc);
		if (ptmp == dev->dev->ringEnd)
			dev->dev->ringOut = dev->dev->ringStart;
		else
			dev->dev->ringOut = ptmp;

		PDEBUG("RPC Read is in 1st kind...\n");
	} else {
		if (my_copy_to_user((int *)buf, (int *)get_rpc_addr(dev->dev->ringOut), temp)) {
			ret = -EFAULT;
			goto out;
		}
		count -= temp;

		if (my_copy_to_user
		    ((int *)(buf + temp), (int *)get_rpc_addr(dev->dev->ringStart), count)) {
			ret = -EFAULT;
			goto out;
		}
		ret += (temp + count);
		dev->dev->ringOut = dev->dev->ringStart + ((count + 3) & 0xfffffffc);

		PDEBUG("RPC Read is in 2nd kind...\n");
	}

	/* NOTE: we do not need spin lock here because we are protected by semaphore already */
	tasklet_disable(&extra->tasklet);
	if (rpc_done(extra)) {
		PDEBUG("%s: Previous RPC is done, unregister myself\n",
		       __func__);
		update_currProc(extra, NULL);
	}

	/*process next rpc command if any */
	if (need_dispatch(extra)) {
		rpc_dispatch((unsigned long)extra);
	}
	tasklet_enable(&extra->tasklet);


out:
	up(&dev->ptrSync->readSem);
done:
	PDEBUG("RPC intr ringOut pointer is : 0x%8x\n", (int)dev->dev->ringOut);
	PDEBUG("%s:%d pid:%d reads %d bytes\n", extra->name, __LINE__,
	       current->pid, ret);
	return ret;
}

/*
// We don't need parameter f_pos here...
// note: rpc_intr_write only support nonblocking mode
*/
ssize_t rpc_intr_write(struct file *filp, const char *buf, size_t count,
		       loff_t *f_pos)
{
	RPC_PROCESS *proc = filp->private_data;
	RPC_INTR_Dev *dev = (RPC_INTR_Dev *) proc->dev;	/* the first listitem */
	RPC_DEV_EXTRA *extra = proc->extra;
	RPC_DEV_EXTRA *rextra = extra + 1;
	int temp, size;
	ssize_t ret = 0;
	u32 ptmp;
	int rpc_ring_size = dev->dev->ringEnd - dev->dev->ringStart;

	if (rpc_intr_is_paused) {
		printk
		    ("RPCintr: someone access rpc intr during the pause...\n");
		msleep(1000);
		return -EAGAIN;
	}

	if (down_interruptible(&dev->ptrSync->writeSem))
		return -ERESTARTSYS;

#if 1
	/* Threads that share the same file descriptor should have the same tgid
	 * However, with uClibc pthread library, pthread_create() creates threads with pid == tgid
	 * So the tgid is not readl tgid, we have to maintain the thread list that we can lookup later
	 */
	if (current->tgid != proc->pid) {
		RPC_PROCESS *rproc;
		list_for_each_entry(rproc, &rextra->tasks, list) {
			/*find the entry in read device task list with the same pid */
			if (rproc->pid == proc->pid) {
				update_thread_list(rproc);
				break;
			}
		}
	}
#endif

	if (ring_empty((RPC_COMMON_Dev *) dev->dev))
		size = 0;	/* the ring is empty */
	else if (dev->dev->ringIn > dev->dev->ringOut)
		size = dev->dev->ringIn - dev->dev->ringOut;
	else
		size = rpc_ring_size + dev->dev->ringIn - dev->dev->ringOut;

	PDEBUG("%s: count:%d space:%d\n", extra->name, count,
	       rpc_ring_size - size - 1);
	PDEBUG("%s: pid:%d tgid:%d\n", extra->name, current->pid,
	       current->tgid);

	if (count > (rpc_ring_size - size - 1))
		goto out;

	temp = dev->dev->ringEnd - dev->dev->ringIn;
	if (temp >= count) {
		if (my_copy_from_user((int *)get_rpc_addr(dev->dev->ringIn), (int *)buf, count)) {
			ret = -EFAULT;
			goto out;
		}
		ret += count;
		ptmp = dev->dev->ringIn + ((count + 3) & 0xfffffffc);

		dsb(sy);

		if (ptmp == dev->dev->ringEnd)
			dev->dev->ringIn = dev->dev->ringStart;
		else
			dev->dev->ringIn = ptmp;

		PDEBUG("RPC Write is in 1st kind...\n");
	} else {
		if (my_copy_from_user((int *)get_rpc_addr(dev->dev->ringIn), (int *)buf, temp)) {
			ret = -EFAULT;
			goto out;
		}
		count -= temp;

		if (my_copy_from_user
		    ((int *)get_rpc_addr(dev->dev->ringStart), (int *)(buf + temp), count)) {
			ret = -EFAULT;
			goto out;
		}
		ret += (temp + count);

		dsb(sy);

		dev->dev->ringIn = dev->dev->ringStart + ((count + 3) & 0xfffffffc);

		PDEBUG("RPC Write is in 2nd kind...\n");
	}

	/*peek_rpc_struct(extra->name, dev); */

	/* notify all the processes in the wait queue */
	temp = (int)*f_pos;	/* use the "f_pos" of file object to store the device number */
	if (temp == (RPC_INTR_DEV_SA_ID0 * RPC_NR_PAIR + 1))
		rtd_outl(REG_SB2_CPU_INT, (RPC_INT_SA | RPC_INT_WRITE_1));
	else if (temp == (RPC_INTR_DEV_SV1_ID2 * RPC_NR_PAIR + 1))
		rtd_outl(REG_SB2_CPU_INT, (RPC_INT_SV | RPC_INT_WRITE_1));
#ifdef CONFIG_REALTEK_RPC_VCPU2
	else if (temp == (RPC_INTR_DEV_SV2_ID4 * RPC_NR_PAIR + 1))
		rtd_outl(REG_SB2_CPU_INT, (RPC_INT_SV2 | RPC_INT_WRITE_1));
#endif
#ifdef CONFIG_REALTEK_RPC_KCPU
	else if (temp == (RPC_INTR_DEV_SK_ID0 * RPC_NR_PAIR + RPC_NR_DEVS + 1))
		rtd_outl(REG_SB2_CPU_INT, (RPC_INT_SK | RPC_INT_WRITE_1));
#endif
	else
		printk("error device number...\n");

out:
	PDEBUG("RPC intr ringIn pointer is : 0x%8x\n", (int)dev->dev->ringIn);
	up(&dev->ptrSync->writeSem);
	return ret;
}

long rpc_intr_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
{
	int ret = 0;

	switch (cmd) {
	case RPC_IOCTTIMEOUT:
		timeout = arg;
		break;
	case RPC_IOCQTIMEOUT:
		return timeout;
#ifdef CONFIG_REALTEK_RPC_PROGRAM_REGISTER
	case RPC_IOCTHANDLER:
		{
			int found;
			RPC_PROCESS *proc = filp->private_data;
			RPC_HANDLER *handler;

			PDEBUG("%s:%d %d: Register handler for programID:%lu\n",
			       __func__, __LINE__, proc->pid, arg);
			found = 0;
			list_for_each_entry(handler, &proc->handlers, list) {
				if (handler->programID == arg) {
					found = 1;
					break;
				}
			}

			if (found)
				break;

			/*not found, add to handler list */
			handler = kmalloc(sizeof(RPC_HANDLER), GFP_KERNEL);
			if (handler == NULL) {
				printk("%s: failed to allocate RPC_HANDLER\n",
				       __func__);
				return -ENOMEM;
			}
			handler->programID = arg;
			list_add(&handler->list, &proc->handlers);
			PDEBUG
			    ("%s:%d %s: Add handler pid:%d for programID:%lu\n",
			     __func__, __LINE__, proc->extra->name, proc->pid,
			     arg);
			break;
		}
#endif
	default:		/* redundant, as cmd was checked against MAXNR */
		printk("%s:%d unsupported ioctl cmd:%x arg:%lx\n", __func__,
		       __LINE__, cmd, arg);
		return -ENOTTY;
	}

	return ret;
}
#endif
#endif /*CONFIG_REALTEK_RPC_MULTIPROCESS */

struct file_operations rpc_intr_fops = {
/*	llseek =                scull_llseek,*/
	.unlocked_ioctl = rpc_intr_ioctl,
#ifdef CONFIG_COMPAT
	.compat_ioctl = rpc_intr_ioctl,
#endif
	.read = rpc_intr_read,
	.write = rpc_intr_write,
	.open = rpc_intr_open,
	.release = rpc_intr_release,
};
