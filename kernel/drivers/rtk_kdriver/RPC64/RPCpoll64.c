/*
 * $Id: RPCpoll.c,v 1.10 2004/8/4 09:25 Jacky Exp $
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
#include <linux/delay.h>
#include <rtk_kdriver/RPCDriver.h>

#include <linux/uaccess.h>	/* copy_to_user() copy_from_user() */

#ifdef CONFIG_ARM64_RPC
RPC_POLL_Dev rpc_poll_devices[RPC_POLL_DEV_TOTAL];
#ifdef CONFIG_REALTEK_RPC_KCPU
RPC_POLL_Dev rpc_poll_kcpu_devices[RPC_POLL_DEV_KCPU_TOTAL];
#endif
#else
RPC_POLL_Dev *rpc_poll_devices;
#ifdef CONFIG_REALTEK_RPC_KCPU
RPC_POLL_Dev *rpc_poll_kcpu_devices;
#endif
#endif
int rpc_poll_is_paused;
unsigned int user_rpc_queue_count= 0;
#ifdef CONFIG_REALTEK_RPC_MULTIPROCESS

static RPC_DEV_EXTRA rpc_poll_extra[RPC_NR_DEVS / RPC_NR_PAIR];
#ifdef CONFIG_REALTEK_RPC_KCPU
static RPC_DEV_EXTRA rpc_poll_kcpu_extra[RPC_NR_KCPU_DEVS / RPC_NR_PAIR];
#endif

#ifdef CONFIG_ARM64_RPC
int rpc_poll_init(void)
{
	static int is_init;
	int result = 0, i;

	/* Create corresponding structures for each device. */
	//rpc_poll_devices = (RPC_POLL_Dev *) get_rpc_addr(RPC_POLL_RECORD_ADDR);

	for (i = 0; i < RPC_POLL_DEV_TOTAL; i++) {
		rpc_poll_devices[i].dev = (RPC_RECORE_Dev *) get_rpc_addr(RPC_POLL_RECORD_ADDR + i *RPC_RECORD_ADDR_SIZE);
		PDEBUG("rpc_poll_device %d addr: %x \n", i,
		       (unsigned)&(rpc_poll_devices[i].dev));
		//rpc_poll_devices[i].ringBuf =(unsigned long)get_rpc_addr(RPC_POLL_DEV_ADDR +i * RPC_RING_SIZE * 2) & 0xFFFFFFFF;
		rpc_poll_devices[i].dev->ringBuf =(RPC_POLL_DEV_ADDR +i * RPC_RING_SIZE * 2) ;

		/* Initialize pointers... */
		rpc_poll_devices[i].dev->ringStart = rpc_poll_devices[i].dev->ringBuf;
		rpc_poll_devices[i].dev->ringEnd =
		    rpc_poll_devices[i].dev->ringBuf + RPC_RING_SIZE;
		rpc_poll_devices[i].dev->ringIn = rpc_poll_devices[i].dev->ringBuf;
		rpc_poll_devices[i].dev->ringOut = rpc_poll_devices[i].dev->ringBuf;

		PDEBUG("The %dth RPC_POLL_Dev:\n", i);
		PDEBUG("RPC ringStart: 0x%8x\n",
		       (int)rpc_poll_devices[i].dev->ringStart);
		PDEBUG("RPC ringEnd:   0x%8x\n",
		       (int)rpc_poll_devices[i].dev->ringEnd);
		PDEBUG("RPC ringIn:    0x%8x\n",
		       (int)rpc_poll_devices[i].dev->ringIn);
		PDEBUG("RPC ringOut:   0x%8x\n",
		       (int)rpc_poll_devices[i].dev->ringOut);
		PDEBUG("\n");

		rpc_poll_extra[i].nextRpc = (char *)get_rpc_addr(rpc_poll_devices[i].dev->ringOut);
		rpc_poll_extra[i].currProc = NULL;

		if (!is_init) {
			rpc_poll_devices[i].ptrSync =
			    kmalloc(sizeof(RPC_SYNC_Struct), GFP_KERNEL);

			/*Initialize wait queue...
			   init_waitqueue_head(&(rpc_poll_devices[i].ptrSync->waitQueue));

			   Initialize sempahores... */
			sema_init(&rpc_poll_devices[i].ptrSync->readSem, 1);
			sema_init(&rpc_poll_devices[i].ptrSync->writeSem, 1);

			rpc_poll_extra[i].dev = (void *)(rpc_poll_devices[i].dev);
			INIT_LIST_HEAD(&rpc_poll_extra[i].tasks);
			/*tasklet_init(&rpc_poll_extra[i].tasklet, rpc_dispatch, (unsigned long)&rpc_poll_extra[i]); */
			spin_lock_init(&rpc_poll_extra[i].lock);
			switch (i) {
			case 0:
				rpc_poll_extra[i].name = "AudioPollWrite";
				break;
			case 1:
				rpc_poll_extra[i].name = "AudioPollRead";
				break;
			case 2:
				rpc_poll_extra[i].name = "Video1PollWrite";
				break;
			case 3:
				rpc_poll_extra[i].name = "Video1PollRead";
				break;
			case 4:
				rpc_poll_extra[i].name = "Video2PollWrite";
				break;
			case 5:
				rpc_poll_extra[i].name = "Video2PollRead";
				break;
			}
		}
	}

#ifdef CONFIG_REALTEK_RPC_KCPU
	/* Create corresponding structures for each device. */
	//rpc_poll_kcpu_devices =(RPC_POLL_Dev *) get_rpc_addr(RPC_POLL_KCPU_RECORD_ADDR);

	for (i = 0; i < RPC_POLL_DEV_KCPU_TOTAL; i++) {
		rpc_poll_kcpu_devices[i].dev = (RPC_RECORE_Dev *) get_rpc_addr(RPC_POLL_KCPU_RECORD_ADDR + i *RPC_RECORD_ADDR_SIZE);
		PDEBUG("rpc_poll_kcpu_device %d addr: %x \n", i,
		       (unsigned)&(rpc_poll_kcpu_devices[i].dev));

		rpc_poll_kcpu_devices[i].dev->ringBuf =(RPC_POLL_KCPU_DEV_ADDR + i * RPC_KCPU_RING_SIZE * 2);

		/* Initialize pointers... */
		rpc_poll_kcpu_devices[i].dev->ringStart =
		    rpc_poll_kcpu_devices[i].dev->ringBuf;
		rpc_poll_kcpu_devices[i].dev->ringEnd =
		    rpc_poll_kcpu_devices[i].dev->ringBuf + RPC_KCPU_RING_SIZE;
		rpc_poll_kcpu_devices[i].dev->ringIn =
		    rpc_poll_kcpu_devices[i].dev->ringBuf;
		rpc_poll_kcpu_devices[i].dev->ringOut =
		    rpc_poll_kcpu_devices[i].dev->ringBuf;

		PDEBUG("The %dth RPC_POLL_Dev:\n", i);
		PDEBUG("RPC ringStart: 0x%8x\n",
		       (int)rpc_poll_kcpu_devices[i].dev->ringStart);
		PDEBUG("RPC ringEnd:   0x%8x\n",
		       (int)rpc_poll_kcpu_devices[i].dev->ringEnd);
		PDEBUG("RPC ringIn:    0x%8x\n",
		       (int)rpc_poll_kcpu_devices[i].dev->ringIn);
		PDEBUG("RPC ringOut:   0x%8x\n",
		       (int)rpc_poll_kcpu_devices[i].dev->ringOut);
		PDEBUG("\n");

		rpc_poll_kcpu_extra[i].nextRpc =(char
		     *)get_rpc_addr(rpc_poll_kcpu_devices[i].dev->ringOut);

		rpc_poll_kcpu_extra[i].currProc = NULL;

		if (!is_init) {
			rpc_poll_kcpu_devices[i].ptrSync =
			    kmalloc(sizeof(RPC_SYNC_Struct), GFP_KERNEL);

			/*Initialize wait queue...
			   init_waitqueue_head(&(rpc_poll_kcpu_devices[i].ptrSync->waitQueue));

			   Initialize sempahores... */
			sema_init(&rpc_poll_kcpu_devices[i].ptrSync->readSem,
				  1);
			sema_init(&rpc_poll_kcpu_devices[i].ptrSync->writeSem,
				  1);

			rpc_poll_kcpu_extra[i].dev =
			    (void *)rpc_poll_kcpu_devices[i].dev;
			INIT_LIST_HEAD(&rpc_poll_kcpu_extra[i].tasks);
			/*tasklet_init(&rpc_poll_kcpu_extra[i].tasklet, rpc_dispatch, (unsigned long)&rpc_poll_kcpu_extra[i]); */
			spin_lock_init(&rpc_poll_kcpu_extra[i].lock);
			switch (i) {
			case 0:
				rpc_poll_kcpu_extra[i].name = "KCPUPollWrite";
				break;
			case 1:
				rpc_poll_kcpu_extra[i].name = "KCPUPollRead";
				break;
			}
		}
	}
#endif

	is_init = 1;
	rpc_poll_is_paused = 0;

	return result;
}

int rpc_poll_pause(void)
{
	rpc_poll_is_paused = 1;

	return 0;
}

void rpc_poll_cleanup(void)
{
	int num = RPC_NR_DEVS / RPC_NR_PAIR, i;

		/* Clean ring buffers. */
	for (i = 0; i < num; i++) {
		kfree(rpc_poll_devices[i].ptrSync);
#ifdef CONFIG_DEVFS_FS
#ifndef KERNEL2_6
		devfs_unregister(rpc_poll_devices[i].handle);
#endif
#endif
	}

	return;
}

int rpc_poll_open(struct inode *inode, struct file *filp)
{
#ifdef CONFIG_DEVFS_FS
#ifndef KERNEL2_6
	int minor = MINOR(inode->i_rdev) - 1;
#endif
#endif
	int minor = MINOR(inode->i_rdev);

	if (minor == 100) {
		filp->f_op = &rpc_ctrl_fops;
		return filp->f_op->open(inode, filp);	/* dispatch to specific open */
	}

	/*
	 * If private data is not valid, we are not using devfs
	 * so use the minor number to select a new f_op
	 */
	if (!filp->private_data && (minor % RPC_NR_PAIR != 0)) {
		filp->f_op = rpc_fop_array[minor % RPC_NR_PAIR];
		return filp->f_op->open(inode, filp);	/* dispatch to specific open */
	}

	PDEBUG("RPC poll open with minor number: %d\n", minor);

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
			    rpc_poll_kcpu_devices[(minor -
						   RPC_NR_DEVS) / RPC_NR_PAIR];
			proc->extra =
			    &rpc_poll_kcpu_extra[(minor -
						  RPC_NR_DEVS) / RPC_NR_PAIR];
		} else {
			proc->dev =
			    (RPC_COMMON_Dev *)&rpc_poll_devices[minor /
								  RPC_NR_PAIR];
			proc->extra = &rpc_poll_extra[minor / RPC_NR_PAIR];
		}
#else
		proc->dev =
		    (RPC_COMMON_Dev *)&rpc_poll_devices[minor / RPC_NR_PAIR];
		proc->extra = &rpc_poll_extra[minor / RPC_NR_PAIR];
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
	}

/*    MOD_INC_USE_COUNT;   Before we maybe sleep */

	return 0;		/* success */
}

int rpc_poll_release(struct inode *inode, struct file *filp)
{
#ifdef CONFIG_DEVFS_FS
#ifndef KERNEL2_6
	int minor = MINOR(inode->i_rdev) - 1;
#endif
#endif
	int minor = MINOR(inode->i_rdev);

#ifdef CONFIG_REALTEK_RPC_PROGRAM_RELEASE_NOTICE
	unsigned long ret;
#endif

	RPC_PROCESS *proc = filp->private_data;
	RPC_POLL_Dev *dev = (RPC_POLL_Dev *) proc->dev;	/* the first listitem */
	RPC_DEV_EXTRA *extra = proc->extra;

	if (extra->currProc == proc) {
		PDEBUG("%s: clear %s(%p) current process\n", __func__,
		       proc->extra->name, dev);
		update_currProc(extra, NULL);
		if (minor == 2 || minor == 6 || minor == 10
#ifdef CONFIG_REALTEK_RPC_KCPU
		    || minor == 14
#endif
		    ) {		/*poll read device (ugly code) */
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
	list_del(&proc->list);

#ifdef CONFIG_REALTEK_RPC_PROGRAM_RELEASE_NOTICE
	/* Send a RPC to firmware to notify process close */
	if (minor == RPC_POLL_DEV_SA_ID0) {
		if (send_rpc_command
		    (RPC_VIDEO, VIDEO_RPC_ToAgent_Resource_Recovery, proc->pid,
		     0, &ret) == RPC_OK)
			PDEBUG("%s: Notify video firmware PID(%d) success.\n",
			       __func__, proc->pid);
		else
			PDEBUG("%s: Notify video firmware PID(%d) failed.\n",
			       __func__, proc->pid);
#ifdef CONFIG_REALTEK_RPC_VCPU2
		if (send_rpc_command
		    (RPC_VIDEO2, VIDEO_RPC_ToAgent_Resource_Recovery, proc->pid,
		     0, &ret) == RPC_OK)
			PDEBUG("%s: Notify video firmware 2 PID(%d) success.\n",
			       __func__, proc->pid);
		else
			PDEBUG("%s: Notify video firmware 2 PID(%d) failed.\n",
			       __func__, proc->pid);
#endif
		if (send_rpc_command
		    (RPC_AUDIO, RPC_ACPU_RELEASE_NOTICE, proc->pid, 0,
		     &ret) == RPC_OK)
			PDEBUG("%s: Notify audio firmware PID(%d) success.\n",
			       __func__, proc->pid);
		else
			PDEBUG("%s: Notify audio firmware PID(%d) failed.\n",
			       __func__, proc->pid);
	}
#endif

	kfree(proc);

	PDEBUG("RPC poll close with minor number: %d\n", minor);

	return 0;		/* success */
}
/* We don't need parameter f_pos here... */
ssize_t rpc_poll_read(struct file *filp, char *buf, size_t count,
		      loff_t *f_pos)
{
	RPC_PROCESS *proc = filp->private_data;
	RPC_POLL_Dev *dev = (RPC_POLL_Dev *) proc->dev;	/* the first listitem */
	RPC_DEV_EXTRA *extra = proc->extra;
	int temp, size;
	ssize_t ret = 0;
	u32 ptmp;
	int rpc_ring_size = dev->dev->ringEnd - dev->dev->ringStart;

	PDEBUG("%s:%d thread:%s pid:%d tgid:%d device:%s\n", __func__, __LINE__,
	       current->comm, current->pid, current->tgid, extra->name);
	if (rpc_poll_is_paused) {
		printk
		    ("RPCpoll: someone access rpc poll during the pause...\n");
		msleep(1000);
		return -EAGAIN;
	}

	if (down_interruptible(&dev->ptrSync->readSem))
		return -ERESTARTSYS;

	if (need_dispatch(extra)) {
		rpc_dispatch((unsigned long)extra);
	}

	PDEBUG("%s: dev:%s(%p) currProc:%p\n", __func__, extra->name, dev,
	       extra->currProc);
	if ((extra->currProc != proc) || (ring_empty((RPC_COMMON_Dev *) dev))) {
		if (unlikely(!(filp->f_flags & O_NONBLOCK))) {
			/*printk("%s:%d:%s Warning: pid:%d use blocking mode with poll buffer!\n", __func__, __LINE__, extra->name, current->pid); */
		}
		goto out;	/*return anyway */
	}

	if (dev->dev->ringIn > dev->dev->ringOut)
		size = dev->dev->ringIn - dev->dev->ringOut;
	else
		size = rpc_ring_size + dev->dev->ringIn - dev->dev->ringOut;

	PDEBUG("%s: %s: count:%d size:%d\n", __func__, extra->name, count,
	       size);
	/*peek_rpc_struct(__func__, dev); */
	if (count > size)
		count = size;

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

	if (rpc_done(extra)) {
		PDEBUG("%s: Previous RPC is done, unregister myself\n",
		       __func__);
		update_currProc(extra, NULL);
	}

	/*process next rpc command if any */
	if (need_dispatch(extra)) {
		rpc_dispatch((unsigned long)extra);
	}

out:
	up(&dev->ptrSync->readSem);
	PDEBUG("RPC poll ringOut pointer is : 0x%8x\n", (int)dev->dev->ringOut);
	PDEBUG("%s:%d pid:%d reads %d bytes\n", extra->name, __LINE__,
	       current->pid, ret);
	return ret;
}

/* We don't need parameter f_pos here... */
ssize_t rpc_poll_write(struct file *filp, const char *buf, size_t count,
		       loff_t *f_pos)
{
	RPC_PROCESS *proc = filp->private_data;
	RPC_POLL_Dev *dev = (RPC_POLL_Dev *) proc->dev;	/* the first listitem */
	RPC_DEV_EXTRA *extra = proc->extra;
	RPC_DEV_EXTRA *rextra = extra + 1;
	int temp, size;
	ssize_t ret = 0;
	u32 ptmp;
	int rpc_ring_size = dev->dev->ringEnd - dev->dev->ringStart;

	if (rpc_poll_is_paused) {
		printk
		    ("RPCpoll: someone access rpc poll during the pause...\n");
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

	if (ring_empty((RPC_COMMON_Dev *) dev))
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

		/*moidfy by Angus */
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

		/*moidfy by Angus */
		dsb(sy);

		dev->dev->ringIn = dev->dev->ringStart + ((count + 3) & 0xfffffffc);

		PDEBUG("RPC Write is in 2nd kind...\n");
	}

	/*peek_rpc_struct(extra->name, dev); */

out:
	PDEBUG("RPC poll ringIn pointer is : 0x%8x\n", (int)dev->dev->ringIn);
	up(&dev->ptrSync->writeSem);
	return ret;
}

long rpc_poll_ioctl(/*struct inode *inode, */ struct file *filp,
		    unsigned int cmd, unsigned long arg)
{
	int ret = 0;

	switch (cmd) {
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
	default:
		printk("%s:%d unsupported ioctl cmd:%x arg:%lx\n", __func__,
		       __LINE__, cmd, arg);
		return -ENOTTY;
	}
	return ret;
}
#endif
#endif /*CONFIG_REALTEK_RPC_MULTIPROCESS */

long rpc_ctrl_ioctl(/*struct inode *inode, */ struct file *filp,
		    unsigned int cmd, unsigned long arg)
{
	int ret = 0;

	if (cmd == RPC_IOCTRESET) {
		printk("[RPC]start reset...\n");
		rpc_poll_init();
		rpc_intr_init();
		rpc_kern_init();

		/* clear the inter-processor interrupts */

#ifdef CONFIG_REALTEK_RPC_KCPU	/* for platform support KCPU case */
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_KV);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_KV2);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_KA);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_KS);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_VK);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_V2K);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_AK);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_SK);
#endif

		rtd_outl(REG_SB2_CPU_INT, RPC_INT_VA);		
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_VS);		
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_AV);		
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_AS);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_SV);		
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_SA);

#ifdef CONFIG_REALTEK_RPC_VCPU2
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_V2A);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_V2S);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_AV2);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_SV2);
#endif
		
		*((int *)phys_to_virt(SYNC_FLAG_ACPU)) = 0xffffffff;
		*((int *)phys_to_virt(SYNC_FLAG_V1CPU)) = 0xffffffff;
#ifdef CONFIG_REALTEK_RPC_VCPU2
		*((int *)phys_to_virt(SYNC_FLAG_V2CPU)) = 0xffffffff;
#endif
		flush_sync_flag();

		printk("[RPC]done...\n");
	} else {
		printk("[RPC]: error ioctl command...\n");
	}

	return ret;
}

int rpc_ctrl_open(struct inode *inode, struct file *filp)
{
	printk("[RPC]open for RPC ioctl...\n");

	return 0;		/* success */
}

#ifdef CONFIG_REALTEK_RPC_DEBUG
int rpc_pr_dispatch=0;  /*debug rpc dispatch to the right process*/
int rpc_pr_dispatch_more =0; /*print more information about dispatch*/
int rpc_pr_read =0; /*print read pointer*/
int rpc_pr_write =0; /*wether print write pointer*/
int rpc_pr_type =0; /*print ACPU or VCPU or KCPU information, or both print*/
char rpc_pr_typename[8]; /*record the print type name*/

static void show_block_user_rpc(int index)
{
	DEBUG_RECORD_RPC *rrpc;
	RPC_DEV_EXTRA           *extra;

#ifdef CONFIG_REALTEK_RPC_KCPU
	if (index >= RPC_INTR_DEV_TOTAL) {
		extra = &rpc_intr_kcpu_extra[(index-RPC_INTR_DEV_TOTAL)];
	} else {
		extra = &rpc_intr_extra[index];
	}
#else
	extra = &rpc_intr_extra[index];
#endif

	list_for_each_entry(rrpc, &extra->blockrpc_list, list){
		printk("%s: program:%u version:%u procedure:%u taskID:%u sysPID:%x size:%u context:%x, count:%d\n",
		extra->name, rrpc->rpc.programID, rrpc->rpc.versionID, rrpc->rpc.procedureID, rrpc->rpc.taskID,
		rrpc->rpc.sysPID, rrpc->rpc.parameterSize, rrpc->rpc.mycontext, rrpc->tcount);
	}
}

static void show_buffer(int index)
{
#ifndef CONFIG_ARM64 // fixme, compile error    
	int  i, j, type, tmpindex;
	RPC_DEV_EXTRA *extra;
	RPC_POLL_Dev *dev;

	if(index < RPC_POLL_DEV_TOTAL){
		tmpindex = index ;
		for(type = 0; type < 3; type++){
			if(type == 0){ /*dump polling buffer*/
				extra = rpc_poll_extra;
				dev =rpc_poll_devices;
			}
			else if(type ==1){/*dump intr buffer*/
				extra = rpc_intr_extra;
				dev =rpc_intr_devices;
			}
			else if(type ==2){ /*dump kern buffer*/
				extra = NULL;
				dev =rpc_kern_devices;
			}
			for (i = tmpindex; i < (tmpindex+2); i++){
				if(extra == NULL)
					printk("\n kernel rpc buffer status:\n");
				else
					printk("\n%s buffer status:\n", extra[i].name);
				printk("======================================\n");
				printk("\n ringStart: 0x%8x, ringEnd:0x%8x, ringIn: 0x%8x, ringOut: 0x%8x \n", dev[i].ringStart,
					dev[i].ringEnd, dev[i].ringIn, dev[i].ringOut);
				printk("ringbuffer info:\n");
				for(j=0;j<RPC_RING_SIZE ;j++)
				{
					if (j%16 == 0) {
						printk("\n%08x :", dev[i].ringStart +j);
					}
					else if (j%4 == 0) 
						printk(" ");
					printk("%02x",(unsigned char)*(dev[i].ringStart +j));
				}
				printk("\n");
			}
		}
	}
#ifdef CONFIG_REALTEK_RPC_KCPU
	else{
		tmpindex = index - RPC_POLL_DEV_TOTAL;
		for(type = 0; type < 3; type++){
			if(type == 0){
				extra = rpc_poll_kcpu_extra;
				dev =rpc_poll_kcpu_devices;
			}
			else if(type ==1){
				extra = rpc_intr_kcpu_extra;
				dev =rpc_intr_kcpu_devices;
			}
			else if(type ==2){
				extra = NULL;
				dev =rpc_kern_kcpu_devices;
			}
			for (i = tmpindex; i < (tmpindex+2); i++){
				if(extra == NULL)
					printk("\n kernel rpc buffer status:\n");
				else
					printk("\n%s buffer status:\n", extra[i].name);
				printk("======================================\n");
				printk("\n ringStart: 0x%8x, ringEnd:0x%8x, ringIn: 0x%8x, ringOut: 0x%8x \n", dev[i].ringStart,
					dev[i].ringEnd, dev[i].ringIn, dev[i].ringOut);
				printk("ringbuffer info:\n");
				for(j=0;j<RPC_RING_SIZE ;j++)
				{
					if (j%16 == 0) {
						printk("\n%08x :", dev[i].ringStart +j);
					}
					else if (j%4 == 0) 
						printk(" ");
					printk("%02x",(unsigned char)*(dev[i].ringStart +j));
				}
				printk("\n");
			}
		}
	}
#endif
#endif
}
////////////////////////////////////////
/*
* echo dumpa/dumpv1/dumpv2/dumpk >/dev/rpcdebug   dump buffer status
* echo prtyx > /dev/rpcdebug       : setting pr type;
* echo prrp1 > /dev/rpcdebug        : print read pointer
* echo prwp1 > /dev/rpcdebug       :print write pointer
*/
////////////////////////////////////////

ssize_t rpc_debug_write(struct file *filp,
	const char *buf, size_t count, loff_t *f_pos)
{
	long ret = count;
	char cmd_buf[100] = {0};

	pr_debug("%s(): count=%d, buf=%p\n", __func__, (int)count, buf);

	if (count >= 100)
		return -EFAULT;

	if (copy_from_user(cmd_buf, buf, count)){
		ret = -EFAULT;
	}

	if ((cmd_buf[0] == 'd') && (cmd_buf[1] == 'u') && (cmd_buf[2] == 'm') && (cmd_buf[3] == 'p')) {
		if(cmd_buf[4] == 'a'){
			show_buffer(0);
		}
		else if((cmd_buf[4] == 'v') &&(cmd_buf[5] == '1')){
			show_buffer(2);
		}
		else if((cmd_buf[4] == 'v') &&(cmd_buf[5] == '2')){
			show_buffer(4);
		}
		else if(cmd_buf[4] == 'k'){
			show_buffer(6);
		}
	}
	else if ((cmd_buf[0] == 's') && (cmd_buf[1] == 'h') && (cmd_buf[2] == 'q') && (cmd_buf[3] == 'e')) {
		if(cmd_buf[4] == 'a'){
			show_block_user_rpc(0);
		}
		else if((cmd_buf[4] == 'v') &&(cmd_buf[5] == '1')){
			show_block_user_rpc(2);
		}
		else if((cmd_buf[4] == 'v') &&(cmd_buf[5] == '2')){
			show_block_user_rpc(4);
		}
		else if((cmd_buf[4] == 'k') ){
			show_block_user_rpc(6);
		}
	}
	else if((cmd_buf[0] == 'p') && (cmd_buf[1] == 'r') && (cmd_buf[2] == 't') && (cmd_buf[3] == 'y')){/*set log level*/
		if(cmd_buf[4] == '0'){
			rpc_pr_type =0;
			rpc_pr_typename[0] = '\0';
		}
		else if(cmd_buf[4] == '1'){ /*print log related to audio*/
			rpc_pr_type =1;
            strncpy(rpc_pr_typename, "Audio", 8);
		}
		else if(cmd_buf[4] == '2'){/*print log related to video1*/
			rpc_pr_type =2;
            strncpy(rpc_pr_typename, "Video1", 8);            
		}
		else if(cmd_buf[4] == '3'){/*print log related to video2*/
			rpc_pr_type =3;
            strncpy(rpc_pr_typename, "Video2", 8);                        
		}
		else if(cmd_buf[4] == '4'){/*print log related to kcpu*/
			rpc_pr_type =4;
            strncpy(rpc_pr_typename, "KCPU", 8);                        
		}
		else if(cmd_buf[4] == '5'){/*print all the log*/
			rpc_pr_type =5;
			rpc_pr_typename[0] = '\0';
		}

	}
	else if((cmd_buf[0] == 'p') && (cmd_buf[1] == 'r') && (cmd_buf[2] == 'd') && (cmd_buf[3] == 'p')){
		if(cmd_buf[4] == '0'){
			rpc_pr_dispatch = 0;
		}
		else if(cmd_buf[4] == '1'){
			rpc_pr_dispatch =1;
		}
	}
	else if((cmd_buf[0] == 'p') && (cmd_buf[1] == 'r') && (cmd_buf[2] == 'd') && (cmd_buf[3] == 'p')&& (cmd_buf[4] == 'm')){
		if(cmd_buf[5] == '0'){
			rpc_pr_dispatch_more =0;
		}
		else if(cmd_buf[5] == '1'){
			rpc_pr_dispatch_more =1;
		}
	}
	else if((cmd_buf[0] == 'p') && (cmd_buf[1] == 'r') && (cmd_buf[2] == 'r') && (cmd_buf[3] == 'p')){
		if(cmd_buf[4] == '0'){
			rpc_pr_read =0;
		}
		else if(cmd_buf[4] == '1'){
			rpc_pr_read =1;
		}
	}
	else if((cmd_buf[0] == 'p') && (cmd_buf[1] == 'r') && (cmd_buf[2] == 'w') && (cmd_buf[3] == 'p')){
		if(cmd_buf[4] == '0'){
			rpc_pr_write =0;
		}
		else if(cmd_buf[4] == '1'){
			rpc_pr_write =1;
		}
	}

	return ret;
}

long rpc_debug_ioctl(/*struct inode *inode, */struct file *filp,
                 unsigned int cmd, unsigned long arg)
{
	long ret = 0;

	if (cmd == RPC_IOCTRESET) {

	}
    return ret;
}

int rpc_debug_open(struct inode *inode, struct file *filp)
{
	pr_err("[RPC]open for RPC debug...\n");

	return 0;          /* success */
}
#endif

struct file_operations rpc_poll_fops = {
/*    llseek:     scull_llseek,*/
	.unlocked_ioctl = rpc_poll_ioctl,
#ifdef CONFIG_COMPAT
	.compat_ioctl = rpc_poll_ioctl,
#endif
	.read = rpc_poll_read,
	.write = rpc_poll_write,
	.open = rpc_poll_open,
	.release = rpc_poll_release,
};

struct file_operations rpc_ctrl_fops = {
	.unlocked_ioctl = rpc_ctrl_ioctl,
#ifdef CONFIG_COMPAT
	.compat_ioctl = rpc_ctrl_ioctl,
#endif
	.open = rpc_ctrl_open,
};

#ifdef CONFIG_REALTEK_RPC_DEBUG
struct file_operations rpc_debug_fops = {
    .unlocked_ioctl=	rpc_debug_ioctl,
    .open=				rpc_debug_open,
    .write =  rpc_debug_write,

};
#endif
