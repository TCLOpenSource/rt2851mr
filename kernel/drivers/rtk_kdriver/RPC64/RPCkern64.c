/*
 * $Id: RPCkern.c,v 1.10 2004/8/4 09:25 Jacky Exp $
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
#include <linux/freezer.h>
#include <linux/delay.h>
#include <rtk_kdriver/RPCDriver.h>
#include <linux/kthread.h>
#include <asm/cacheflush.h>

#include <asm/io.h>
#include <linux/uaccess.h>	/* copy_to_user() copy_from_user() */


/*#define PDEBUG(fmt, args...) printk(KERN_ALERT "RPC: " fmt, ## args) */
#define TIMEOUT (5*HZ)
#define	LOOPCOUNT 50

static struct radix_tree_root kernel_rpc_tree = RADIX_TREE_INIT(GFP_ATOMIC);
static DEFINE_SEMAPHORE(kernel_rpc_sem);

#ifndef CONFIG_REALTEK_RPC_MULTIPROCESS
typedef struct RPC_STRUCT {
	u32 programID;	/* program ID defined in IDL file */
	u32 versionID;	/* version ID defined in IDL file */
	u32 procedureID;	/* function ID defined in IDL file */

	u32 taskID;	/* the caller's task ID, assign 0 if NONBLOCK_MODE */
	u32 parameterSize;	/* packet's body size */
	u32 mycontext;	/* return address of reply value */
} RPC_STRUCT;
#endif

typedef struct KRPC_INFO {
	wait_queue_head_t *wq;
	int reply;
} KRPC_INFO;

#ifdef CONFIG_ARM64_RPC
RPC_KERN_Dev rpc_kern_devices[RPC_NR_KERN_DEVS];
#ifdef CONFIG_REALTEK_RPC_KCPU
RPC_KERN_Dev rpc_kern_kcpu_devices[RPC_NR_KERN_KCPU_DEVS];
#endif
#else
RPC_KERN_Dev *rpc_kern_devices;
#ifdef CONFIG_REALTEK_RPC_KCPU
RPC_KERN_Dev *rpc_kern_kcpu_devices;
#endif
#endif

#ifdef CONFIG_REALTEK_RPC_KCPU
struct task_struct *rpc_kthread[(RPC_NR_KERN_DEVS + RPC_NR_KERN_KCPU_DEVS) /
				RPC_NR_PAIR] = { 0 };
static wait_queue_head_t rpc_wq[(RPC_NR_KERN_DEVS + RPC_NR_KERN_KCPU_DEVS) /
				RPC_NR_PAIR];
static struct semaphore send_kernel_rpc_sem[(RPC_NR_KERN_DEVS+RPC_NR_KERN_KCPU_DEVS)/RPC_NR_PAIR];
#else
struct task_struct *rpc_kthread[RPC_NR_KERN_DEVS / RPC_NR_PAIR] = { 0 };
static wait_queue_head_t rpc_wq[RPC_NR_KERN_DEVS / RPC_NR_PAIR];
static struct semaphore send_kernel_rpc_sem[RPC_NR_KERN_DEVS/RPC_NR_PAIR];
#endif
static char *rpc_kthread_name[(RPC_NR_KERN_DEVS
#ifdef CONFIG_REALTEK_RPC_KCPU
+RPC_NR_KERN_KCPU_DEVS
#endif
)/RPC_NR_PAIR] = {"rpc-A"
																						, "rpc-V1"
#ifdef CONFIG_REALTEK_RPC_VCPU2 																					
																						, "rpc-V2"
#endif
#ifdef CONFIG_REALTEK_RPC_KCPU
																						,"rpc-K"
#endif
																					  };

int rpc_kern_is_paused ;

#ifdef CONFIG_DEBUG_KERNEL_RPC
#define DEBUG_KERNEL_RPC_MAX_LEN 15
#define DEBUG_KERNEL_RPC_MAX_TIME 50
#define KERNEL_RPC_DUMMY_REGISTER	0xb8060130

typedef struct DEBUG_KERNEL_RPC {
	unsigned long ringIn;
	unsigned long ringOut;
	unsigned long programID;
	unsigned long versionID;
	unsigned long command;
	unsigned long para1;
	unsigned long  timestamp;
} DEBUG_KERNEL_RPC;

#ifdef CONFIG_REALTEK_RPC_KCPU
DEBUG_KERNEL_RPC debug_kernel_rpc[(RPC_NR_KERN_DEVS+RPC_NR_KERN_KCPU_DEVS)/RPC_NR_PAIR][DEBUG_KERNEL_RPC_MAX_LEN] = {{{0}}};
unsigned long krpc_time_before_handle_command[(RPC_NR_KERN_DEVS+RPC_NR_KERN_KCPU_DEVS)/RPC_NR_PAIR];
unsigned long krpc_time_after_handle_command[(RPC_NR_KERN_DEVS+RPC_NR_KERN_KCPU_DEVS)/RPC_NR_PAIR];
unsigned long krpc_handle_command_id[(RPC_NR_KERN_DEVS+RPC_NR_KERN_KCPU_DEVS)/RPC_NR_PAIR];
unsigned long krpc_handle_command_count[(RPC_NR_KERN_DEVS+RPC_NR_KERN_KCPU_DEVS)/RPC_NR_PAIR]= {0};
#else
DEBUG_KERNEL_RPC debug_kernel_rpc[RPC_NR_KERN_DEVS/RPC_NR_PAIR][DEBUG_KERNEL_RPC_MAX_LEN] = {0};
unsigned long krpc_time_before_handle_command[RPC_NR_KERN_DEVS/RPC_NR_PAIR];
unsigned long krpc_time_after_handle_command[RPC_NR_KERN_DEVS/RPC_NR_PAIR];
unsigned long krpc_handle_command_id[RPC_NR_KERN_DEVS/RPC_NR_PAIR];
unsigned long krpc_handle_command_count[RPC_NR_KERN_DEVS/RPC_NR_PAIR]= {0};
#endif

#ifdef CONFIG_REALTEK_RPC_KCPU
unsigned long record_isr_time[(RPC_NR_KERN_DEVS+RPC_NR_KERN_KCPU_DEVS)/RPC_NR_PAIR];
unsigned long record_isr_wake_up_time[(RPC_NR_KERN_DEVS+RPC_NR_KERN_KCPU_DEVS)/RPC_NR_PAIR];
unsigned long record_isr_user_wake_up_time[(RPC_NR_KERN_DEVS+RPC_NR_KERN_KCPU_DEVS)/RPC_NR_PAIR];
unsigned long record_thread_timeout[(RPC_NR_KERN_DEVS+RPC_NR_KERN_KCPU_DEVS)/RPC_NR_PAIR];
unsigned long record_send_time[(RPC_NR_KERN_DEVS+RPC_NR_KERN_KCPU_DEVS)/RPC_NR_PAIR];
#else
unsigned long record_isr_time[RPC_NR_KERN_DEVS/RPC_NR_PAIR];
unsigned long record_isr_wake_up_time[RPC_NR_KERN_DEVS/RPC_NR_PAIR];
unsigned long record_isr_user_wake_up_time[RPC_NR_KERN_DEVS/RPC_NR_PAIR];
unsigned long record_thread_timeout[RPC_NR_KERN_DEVS/RPC_NR_PAIR];
unsigned long record_send_time[RPC_NR_KERN_DEVS/RPC_NR_PAIR];
#endif
#endif

#ifdef CONFIG_SUPPORT_SCALER
extern unsigned char Scaler_GetRPCInitByVCPU(void);
#endif
static int rpc_kernel_thread(void *p);

#ifdef CONFIG_ARM64_RPC
int rpc_kern_init(void)
{
	static int is_init;
	int result = 0, num, i;

	/* Create corresponding structures for each device. */
	//rpc_kern_devices = (RPC_KERN_Dev *) get_rpc_addr(RPC_KERN_RECORD_ADDR);

	num = RPC_NR_KERN_DEVS;
	for (i = 0; i < num; i++) {
		rpc_kern_devices[i].dev = (RPC_RECORE_Dev *)get_rpc_addr(RPC_KERN_RECORD_ADDR+ i *RPC_RECORD_ADDR_SIZE);
		PDEBUG("rpc_kern_device %d addr: %x \n", i,
		       (unsigned)&(rpc_kern_devices[i].dev));

		rpc_kern_devices[i].dev->ringBuf = (RPC_KERN_DEV_ADDR + i * RPC_RING_SIZE) ;

		/* Initialize pointers... */
		rpc_kern_devices[i].dev->ringStart = rpc_kern_devices[i].dev->ringBuf;
		rpc_kern_devices[i].dev->ringEnd =
		    rpc_kern_devices[i].dev->ringBuf + RPC_RING_SIZE;
		rpc_kern_devices[i].dev->ringIn = rpc_kern_devices[i].dev->ringBuf;
		rpc_kern_devices[i].dev->ringOut = rpc_kern_devices[i].dev->ringBuf;

		PDEBUG("The %dth RPC_KERN_Dev:\n", i);
		PDEBUG("RPC ringStart: 0x%8x\n",
		       (int)rpc_kern_devices[i].dev->ringStart);
		PDEBUG("RPC ringEnd:   0x%8x\n",
		       (int)rpc_kern_devices[i].dev->ringEnd);
		PDEBUG("RPC ringIn:    0x%8x\n",
		       (int)rpc_kern_devices[i].dev->ringIn);
		PDEBUG("RPC ringOut:   0x%8x\n",
		       (int)rpc_kern_devices[i].dev->ringOut);
		PDEBUG("\n");

		if (!is_init) {
			rpc_kern_devices[i].ptrSync =
			    kmalloc(sizeof(RPC_SYNC_Struct), GFP_KERNEL);

			/* Initialize wait queue... */
			init_waitqueue_head(&
					    (rpc_kern_devices[i].ptrSync->
					     waitQueue));

			/* Initialize sempahores... */
			sema_init(&rpc_kern_devices[i].ptrSync->readSem, 1);
			sema_init(&rpc_kern_devices[i].ptrSync->writeSem, 1);
		}

		if (i % RPC_NR_PAIR == 1) {
            long ii = (long) i;
			if (rpc_kthread[i / RPC_NR_PAIR] == 0)
				rpc_kthread[i / RPC_NR_PAIR] =
				    kthread_run(rpc_kernel_thread, (void *)ii,
						"%s", rpc_kthread_name[i/RPC_NR_PAIR]);
		}
	}
#ifdef CONFIG_REALTEK_RPC_KCPU
	/* Create corresponding structures for each device. */
	//rpc_kern_kcpu_devices =(RPC_KERN_Dev *) get_rpc_addr(RPC_KERN_KCPU_RECORD_ADDR);

	num = RPC_NR_KERN_KCPU_DEVS;
	for (i = 0; i < num; i++) {

		rpc_kern_kcpu_devices[i].dev = (RPC_RECORE_Dev *)get_rpc_addr(RPC_KERN_KCPU_RECORD_ADDR+ i *RPC_RECORD_ADDR_SIZE);
		PDEBUG("rpc_kern_kcpu_device %d addr: %x \n", i,
		       (unsigned)&(rpc_kern_kcpu_devices[i].dev));
		rpc_kern_kcpu_devices[i].dev->ringBuf =(RPC_KERN_KCPU_DEV_ADDR +i * RPC_RING_SIZE);

		/* Initialize pointers... */
		rpc_kern_kcpu_devices[i].dev->ringStart =
		    rpc_kern_kcpu_devices[i].dev->ringBuf;
		rpc_kern_kcpu_devices[i].dev->ringEnd =
		    rpc_kern_kcpu_devices[i].dev->ringBuf + RPC_RING_SIZE;
		rpc_kern_kcpu_devices[i].dev->ringIn =
		    rpc_kern_kcpu_devices[i].dev->ringBuf;
		rpc_kern_kcpu_devices[i].dev->ringOut =
		    rpc_kern_kcpu_devices[i].dev->ringBuf;

		PDEBUG("The %dth RPC_KERN_Dev:\n", i);
		PDEBUG("RPC ringStart: 0x%8x\n",
		       (int)rpc_kern_kcpu_devices[i].dev->ringStart);
		PDEBUG("RPC ringEnd:   0x%8x\n",
		       (int)rpc_kern_kcpu_devices[i].dev->ringEnd);
		PDEBUG("RPC ringIn:    0x%8x\n",
		       (int)rpc_kern_kcpu_devices[i].dev->ringIn);
		PDEBUG("RPC ringOut:   0x%8x\n",
		       (int)rpc_kern_kcpu_devices[i].dev->ringOut);
		PDEBUG("\n");

		if (!is_init) {
			rpc_kern_kcpu_devices[i].ptrSync =
			    kmalloc(sizeof(RPC_SYNC_Struct), GFP_KERNEL);

			/* Initialize wait queue... */
			init_waitqueue_head(&
					    (rpc_kern_kcpu_devices[i].ptrSync->
					     waitQueue));

			/* Initialize sempahores... */
			sema_init(&rpc_kern_kcpu_devices[i].ptrSync->readSem,
				  1);
			sema_init(&rpc_kern_kcpu_devices[i].ptrSync->writeSem,
				  1);
		}

		if (i % RPC_NR_PAIR == 1) {
            long ii = (long)(i + RPC_NR_KERN_DEVS);
			if (rpc_kthread[(i + RPC_NR_KERN_DEVS) / RPC_NR_PAIR] ==0)
				rpc_kthread[(i +RPC_NR_KERN_DEVS) / RPC_NR_PAIR] =
				    kthread_run(rpc_kernel_thread, (void *)ii,"%s", rpc_kthread_name[(i+RPC_NR_KERN_DEVS)/RPC_NR_PAIR]);
		}
	}
#endif
	if (!is_init) {
#ifdef CONFIG_REALTEK_RPC_KCPU
		for (i = 0;
		     i <
		     (RPC_NR_KERN_DEVS + RPC_NR_KERN_KCPU_DEVS) / RPC_NR_PAIR;
		     i++)
#else
		for (i = 0; i < RPC_NR_KERN_DEVS / RPC_NR_PAIR; i++)
#endif
			init_waitqueue_head(&(rpc_wq[i]));
	}

#ifdef CONFIG_REALTEK_RPC_KCPU
		for (i = 0; i < (RPC_NR_KERN_DEVS+RPC_NR_KERN_KCPU_DEVS)/RPC_NR_PAIR; i++)
#else
		for (i = 0; i < RPC_NR_KERN_DEVS/RPC_NR_PAIR; i++)
#endif
	{
		sema_init(&send_kernel_rpc_sem[i], 1);
	}

	is_init = 1;
	rpc_kern_is_paused = 0;

	return result;
}

int rpc_kern_pause(void)
{
	rpc_kern_is_paused = 1;

	return 0;
}

ssize_t rpc_kern_read(int opt, char *buf, size_t count)
{
	RPC_KERN_Dev *dev;
	int temp, size;
	ssize_t ret = 0;
	u32 ptmp;

#ifdef CONFIG_REALTEK_RPC_KCPU
	if ((opt == RPC_AUDIO) || (opt == RPC_VIDEO) 
#ifdef CONFIG_REALTEK_RPC_VCPU2
		|| (opt == RPC_VIDEO2)
#endif
		)
		dev = &rpc_kern_devices[opt * RPC_NR_PAIR + 1];
	else
		dev = &rpc_kern_kcpu_devices[1];
#else
	dev = &rpc_kern_devices[opt * RPC_NR_PAIR + 1];
#endif
	PDEBUG("read rpc_kern_device: %lx \n", (unsigned long)dev);
	if (down_interruptible(&dev->ptrSync->readSem))
		return -ERESTARTSYS;

	PDEBUG("RPC kern ringIn pointer is : 0x%8x, ringOut pointer is : 0x%8x\n", (int)dev->dev->ringIn, (int)dev->dev->ringOut);
	if (dev->dev->ringIn == dev->dev->ringOut)
		goto out;	/* the ring is empty... */
	else if (dev->dev->ringIn > dev->dev->ringOut)
		size = dev->dev->ringIn - dev->dev->ringOut;
	else
		size = RPC_RING_SIZE + dev->dev->ringIn - dev->dev->ringOut;

	//printk("%s: count:%ld size:%d\n", __func__,count, size);

	if (count > size)
		count = size;

	temp = dev->dev->ringEnd - dev->dev->ringOut;
	if (temp >= count) {
		if (my_copy_user((int *)buf, (int *)get_rpc_addr(dev->dev->ringOut), count)) {
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
		if (my_copy_user((int *)buf, (int *)get_rpc_addr(dev->dev->ringOut), temp)) {
			ret = -EFAULT;
			goto out;
		}
		count -= temp;

		if (my_copy_user
		    ((int *)(buf + temp), (int *)get_rpc_addr(dev->dev->ringStart), count)) {
			ret = -EFAULT;
			goto out;
		}
		ret += (temp + count);
		dev->dev->ringOut = dev->dev->ringStart + ((count + 3) & 0xfffffffc);

		PDEBUG("RPC Read is in 2nd kind...\n");
	}
out:
	PDEBUG("RPC kern ringOut pointer is : 0x%8x\n", (int)dev->dev->ringOut);
	up(&dev->ptrSync->readSem);
	return ret;
}

ssize_t rpc_kern_write(int opt, const char *buf, size_t count)
{
	RPC_KERN_Dev *dev;
	int temp, size;
	ssize_t ret = 0;
	u32 ptmp;

#ifdef CONFIG_REALTEK_RPC_KCPU
	if ((opt == RPC_AUDIO) || (opt == RPC_VIDEO) 
#ifdef CONFIG_REALTEK_RPC_VCPU2
		|| (opt == RPC_VIDEO2)
#endif
		)
		dev = &rpc_kern_devices[opt * RPC_NR_PAIR];
	else
		dev = &rpc_kern_kcpu_devices[0];
#else
	dev = &rpc_kern_devices[opt * RPC_NR_PAIR];
#endif
	PDEBUG("write rpc_kern_device: %lx \n", (unsigned long)dev);
	PDEBUG("[rpc_kern_write] write rpc_kern_device: caller%x, *buf:0x%x \n",
	       (unsigned int)__read_caller_register(),
	       *(unsigned int *)buf);
	if (down_interruptible(&dev->ptrSync->writeSem))
		return -ERESTARTSYS;

	if (dev->dev->ringIn == dev->dev->ringOut)
		size = 0;	/* the ring is empty */
	else if (dev->dev->ringIn > dev->dev->ringOut)
		size = dev->dev->ringIn - dev->dev->ringOut;
	else
		size = RPC_RING_SIZE + dev->dev->ringIn - dev->dev->ringOut;

	PDEBUG("%s: count:%ld size:%d\n", __func__,count,
	       size);
	if (count > (RPC_RING_SIZE - size - 1))
		goto out;

	temp = dev->dev->ringEnd - dev->dev->ringIn;
	if (temp >= count) {
		if (my_copy_user((int *)get_rpc_addr(dev->dev->ringIn), (int *)buf, count)) {
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
		if (my_copy_user((int *)get_rpc_addr(dev->dev->ringIn), (int *)buf, temp)) {
			ret = -EFAULT;
			goto out;
		}
		count -= temp;

		if (my_copy_user
		    ((int *)get_rpc_addr(dev->dev->ringStart), (int *)(buf + temp), count)) {
			ret = -EFAULT;
			goto out;
		}
		ret += (temp + count);

		dsb(sy);

		dev->dev->ringIn = dev->dev->ringStart + ((count + 3) & 0xfffffffc);

		PDEBUG("RPC Write is in 2nd kind...\n");
	}

	if (opt == RPC_AUDIO)									/* audio*/
		rtd_outl(REG_SB2_CPU_INT, (RPC_INT_SA | RPC_INT_WRITE_1));
	else if (opt == RPC_VIDEO)								/*video*/
		rtd_outl(REG_SB2_CPU_INT, (RPC_INT_SV | RPC_INT_WRITE_1));
#ifdef CONFIG_REALTEK_RPC_VCPU2
	else if (opt == RPC_VIDEO2)							/*video2*/
		rtd_outl(REG_SB2_CPU_INT, (RPC_INT_SV2 | RPC_INT_WRITE_1));
#endif
#ifdef CONFIG_REALTEK_RPC_KCPU
	else if (opt == RPC_KCPU)								/*kcpu*/
		rtd_outl(REG_SB2_CPU_INT, (RPC_INT_SK | RPC_INT_WRITE_1));
#endif
	else
		printk("error device number...\n");

out:
	PDEBUG("RPC kern ringIn pointer is : 0x%8x\n", (int)dev->dev->ringIn);
	up(&dev->ptrSync->writeSem);
	return ret;
}
int register_kernel_rpc(unsigned long command, FUNC_PTR ptr)
{
	int error;

	error = radix_tree_preload(GFP_KERNEL);
	if (error == 0) {
		down(&kernel_rpc_sem);
		error =
		    radix_tree_insert(&kernel_rpc_tree, command, (void *)ptr);
		if (error)
			printk("RPC: register kernel rpc %ld error...\n",
			       command);
		up(&kernel_rpc_sem);
		radix_tree_preload_end();
	}

	return error;
}

unsigned int handle_command(unsigned long command, unsigned long param1,
			     unsigned long param2)
{
	FUNC_PTR ptr;
	int ret = 0;

	printk("Handle command %lx, param1: %lx, param2: %lx...\n", command,
	       param1, param2);
	down(&kernel_rpc_sem);
	ptr = radix_tree_lookup(&kernel_rpc_tree, command);
	up(&kernel_rpc_sem);
	if (ptr)
		ret = ptr(param1, param2);
	else
		printk("RPC: lookup kernel rpc %ld error...\n", command);

	return ret;
}

static int rpc_kernel_thread(void *pp)
{
	char readbuf[sizeof(RPC_STRUCT) + 3 * sizeof(unsigned int)];
	RPC_KERN_Dev *dev;
	RPC_STRUCT *rpc;
	unsigned int *tmp;
    long p = (long) pp;

/*	daemonize(current->comm);*/

#ifdef CONFIG_REALTEK_RPC_KCPU
	if ((int)p >= RPC_NR_KERN_DEVS)
		dev = &rpc_kern_kcpu_devices[(int)p - RPC_NR_KERN_DEVS];
	else
#endif
		dev = &rpc_kern_devices[(int)p];
	while (1) {
/*
//		if (current->flags & PF_FREEZE)
//			refrigerator(PF_FREEZE);
*/
		try_to_freeze();

/*		printk(" #@# wait %s %x %x \n", current->comm, dev, dev->waitQueue);*/
		if (wait_event_interruptible
		    (dev->ptrSync->waitQueue,
		     (kthread_should_stop()) | (dev->dev->ringIn != dev->dev->ringOut))) {
			printk("%s got signal or should stop...\n",
			       current->comm);
			continue;
		}
/*		printk(" #@# wakeup %s \n", current->comm);*/

		if (kthread_should_stop()) {
			printk("%s exit...\n", current->comm);
			break;
		}

		/* read the reply data... */
		if (rpc_kern_read(((int)p) / RPC_NR_PAIR, readbuf,sizeof(RPC_STRUCT)) != sizeof(RPC_STRUCT)) {
			printk("ERROR in read kernel RPC...\n");
			continue;
		}

		rpc = (RPC_STRUCT *) readbuf;
		tmp = (unsigned int *)(readbuf + sizeof(RPC_STRUCT));

		if ((htonl(rpc->programID) != REPLYID) && (htonl(rpc->versionID) != REPLYID)) {	/*RPC data */
			/* handle the request... */
			char replybuf[sizeof(RPC_STRUCT) +
				      2 * sizeof(unsigned int)];
			unsigned int ret;
			RPC_STRUCT *rrpc = (RPC_STRUCT *) replybuf;

			/* read the payload... */
			if (rpc_kern_read
			    (((int)p) / RPC_NR_PAIR,
			     readbuf + sizeof(RPC_STRUCT),
			     3 * sizeof(unsigned int))
			    != 3 * sizeof(unsigned int)) {
				printk("ERROR in read payload...\n");
				continue;
			}

			ret =
			    handle_command(ntohl(*tmp), ntohl(*(tmp + 1)),
					   ntohl(*(tmp + 2)));
			if (rpc->taskID) {	/*for blocking mode RPC request */
				/* fill the RPC_STRUCT... */
				rrpc->programID = (unsigned int)htonl(REPLYID);
				rrpc->versionID = (unsigned int)htonl(REPLYID);
				rrpc->procedureID = 0;
				rrpc->taskID = 0;
#ifdef CONFIG_REALTEK_RPC_MULTIPROCESS
				rrpc->sysPID = 0;
#endif
				rrpc->parameterSize =
				    (unsigned int)htonl(2 * sizeof(unsigned int));
				rrpc->mycontext = rpc->mycontext;

				/* fill the parameters... */
				tmp =
				    (unsigned int *)(replybuf +
						      sizeof(RPC_STRUCT));
				*(tmp + 0) = rpc->taskID;
				*(tmp + 1) = (unsigned int)htonl(ret);

				if (rpc_kern_write
				    (((int)p) / RPC_NR_PAIR, replybuf,
				     sizeof(replybuf)) != sizeof(replybuf)) {
					printk("ERROR in send kernel RPC...\n");
					return RPC_FAIL;
				}
			}
		} else {	/* reply data */
			KRPC_INFO *info;
			/* read the payload... */
			if (rpc_kern_read(((int)p) / RPC_NR_PAIR,readbuf + sizeof(RPC_STRUCT),2 * sizeof(unsigned int))!= 2 * sizeof(unsigned int)) {
				printk("ERROR in read payload...\n");
				continue;
			}

			/* parse the reply data... */
			*((unsigned long *)phys_to_virt(ntohl(rpc->mycontext))) =ntohl(*(tmp + 1));
			info = (KRPC_INFO *) phys_to_virt(ntohl(*tmp));
			info->reply = 1;
			wake_up(info->wq);	/* ack the sync... */
		}
	}

	return 0;
}

#ifdef CONFIG_DEBUG_KERNEL_RPC
void dump_kernel_rpc_data(int opt)
{
    RPC_KERN_Dev *devread, *devwrite;

    /*pr_err("current time: %lu, send time: %lu, record_isr_time: %lu , wake_up_time: %lu, user_wake_up_time: %lu, enter thread time:%lu \n", jiffies,
        record_send_time[opt], record_isr_time[opt], record_isr_wake_up_time[opt], record_isr_user_wake_up_time[opt], record_thread_timeout[opt]);
    pr_err("last time rpc thread handle rpc command (%lu) --> enter time: %lu, out time: %lu, count : %lu\n", krpc_handle_command_id[opt], krpc_time_before_handle_command[opt],
        krpc_time_after_handle_command[opt], krpc_handle_command_count[opt]);*/
#ifdef CONFIG_REALTEK_RPC_KCPU
    if ((opt == RPC_AUDIO) || (opt == RPC_VIDEO)
#ifdef CONFIG_REALTEK_RPC_VCPU2
		|| (opt == RPC_VIDEO2)
#endif
		)
        devread = &rpc_kern_devices[opt*RPC_NR_PAIR+1];
    else
        devread = &rpc_kern_kcpu_devices[1];
#else
    devread = &rpc_kern_devices[opt*RPC_NR_PAIR+1];
#endif
    pr_err("kernel rpc timeout! current read buffer status ringIn: 0x%8x, ringOut:0x%8x\n", (int)devread->dev->ringIn, (int)devread->dev->ringOut);
    if(devread->dev->ringIn != devread->dev->ringOut){
        pr_err("Please check RPC !!!\n");
        peek_rpc_struct("kern_read_buffer", (RPC_COMMON_Dev *)devread->dev);
    }
#ifdef CONFIG_REALTEK_RPC_KCPU
    if ((opt == RPC_AUDIO) || (opt == RPC_VIDEO) 
#ifdef CONFIG_REALTEK_RPC_VCPU2
		|| (opt == RPC_VIDEO2)
#endif
		)
        devwrite = &rpc_kern_devices[opt*RPC_NR_PAIR];
    else
        devwrite = &rpc_kern_kcpu_devices[0];
#else
    devwrite = &rpc_kern_devices[opt*RPC_NR_PAIR];
#endif
    pr_err("kernel rpc timeout! current write buffer status ringIn: 0x%8x, ringOut:0x%8x\n", (int)devwrite->dev->ringIn, (int)devwrite->dev->ringOut);
    if(devwrite->dev->ringIn != devwrite->dev->ringOut){
        pr_err("Please check Audio or Video !!!\n");
        peek_rpc_struct("kern_write_buffer", (RPC_COMMON_Dev *)devwrite->dev);
    }

}
#endif

/*int send_rpc_command(int opt, unsigned long command, unsigned long param1, unsigned long param2, unsigned long *retvalue)*/
int send_krpc(int opt,
	      KRPC_PROCEDUREID procedureID,
	      KRPC_SENDMODE send_mode,
	      unsigned long command,
	      unsigned long param1,
	      unsigned long param2, unsigned long *retvalue)
{
	char sendbuf[sizeof(RPC_STRUCT) + 3 * sizeof(unsigned int)];
	RPC_STRUCT *rpc = (RPC_STRUCT *) sendbuf;
	KRPC_INFO info;
	unsigned int *tmp;
	
	if (rpc_kern_is_paused) {
		pr_err
		    ("RPCkern: someone access rpc kern during the pause...\n");
		return RPC_FAIL;
	}

	if (opt >= RPC_AUDIO) {
		pr_err("RPCkern: no this RPC channel(%d), command: %x ...\n", opt, command);
		return RPC_FAIL;
	}
	
	down(&send_kernel_rpc_sem[opt]);	
	if (rpc_kthread[opt] == 0) {
		pr_err("RPCkern: %d is disabled...\n", opt);
		up(&send_kernel_rpc_sem[opt]);
		return RPC_FAIL;
	}

	if (opt == RPC_AUDIO) {
		/*invalidate sync flag before read */
		dmac_flush_range(phys_to_virt(0x000000d0),
				 phys_to_virt(0x000000d4));
		outer_inv_range(0x000000d0, 0x000000d4);

		/*
		   // Make sure ACPU should init RPC ready before send RPC
		   // ACPU should set sync flag value not same with 0xFFFFFFFF after init RPC ready.
		 */
		if (*((int *)phys_to_virt(0x000000d0)) == (0xffffffff)) {
			pr_err(KERN_INFO
			       "RPCkern: ACPU not finished init RPC ...\n");
			up(&send_kernel_rpc_sem[opt]);
			return RPC_ACPU_NOT_READY;
		}
	}

	if (opt == RPC_VIDEO) {
		/*invalidate sync flag before read */
		dmac_flush_range(phys_to_virt(0x000000d4),
				 phys_to_virt(0x000000d8));
		outer_inv_range(0x000000d4, 0x000000d8);

		/*
		   // Make sure VCPU should init RPC ready before send RPC
		   // VCPU should set sync flag value not same with 0xFFFFFFFF after init RPC ready.
		 */
		if (*((int *)phys_to_virt(0x000000d4)) == (0xffffffff)) {
			pr_err(KERN_INFO
			       "RPCkern: VCPU not finished init RPC ...\n");
			up(&send_kernel_rpc_sem[opt]);
			return RPC_VCPU_NOT_READY;
		}
	}

#ifdef CONFIG_REALTEK_RPC_VCPU2
	if (opt == RPC_VIDEO2) {
		/*invalidate sync flag before read */
		dmac_flush_range(phys_to_virt(0x000000d8),
				 phys_to_virt(0x000000dc));
		outer_inv_range(0x000000d8, 0x000000dc);

		/*
		   // Make sure VCPU2 should init RPC ready before send RPC
		   // VCPU2 should set sync flag value not same with 0xFFFFFFFF after init RPC ready.
		 */
		if (*((int *)phys_to_virt(0x000000d8)) == (0xffffffff)) {
			printk(KERN_INFO
			       "RPCkern: VCPU2 not finished init RPC ...\n");
			up(&send_kernel_rpc_sem[opt]);
			return RPC_VCPU_NOT_READY;
		}
	}
#endif

/*	printk(" #@# sendbuf: %d \n", sizeof(sendbuf));*/
	info.wq = &rpc_wq[opt];
	info.reply = 0;
	/* fill the RPC_STRUCT... */
	rpc->programID = htonl(KERNELID);
	rpc->versionID = htonl(KERNELID);
	rpc->procedureID = htonl(procedureID);
	/*rpc->taskID = htonl((unsigned long)&info); */
	rpc->taskID =
	    (send_mode & KRPC_BLOCK_MODE) ? htonl((unsigned int)virt_to_phys(&info)) : 0;
#ifdef CONFIG_REALTEK_RPC_MULTIPROCESS
	rpc->sysPID = 0;
#endif
	rpc->parameterSize = htonl(3 * sizeof(unsigned int));
	//rpc->mycontext = htonl((unsigned int)retvalue);
	rpc->mycontext = htonl((unsigned int)virt_to_phys((void*)retvalue));

	/* fill the parameters... */
	tmp = (unsigned int *)(sendbuf + sizeof(RPC_STRUCT));
/*	printk(" aaa: %x bbb: %x \n", sendbuf, tmp);*/
	*tmp = (unsigned int)htonl(command);
	*(tmp + 1) = (unsigned int)htonl(param1);
	*(tmp + 2) = (unsigned int)htonl(param2);

	if (rpc_kern_write(opt, sendbuf, sizeof(sendbuf)) != sizeof(sendbuf)) {
		printk("ERROR in send kernel RPC...\n");
		up(&send_kernel_rpc_sem[opt]);
		return RPC_FAIL;
	}

	/* wait the result... */
	/*if (!wait_event_timeout(rpc_wq[opt], info.reply, TIMEOUT)) {
	   printk("kernel rpc timeout -> disable %s...\n", rpc_kthread[opt]->comm);
	   kthread_stop(rpc_kthread[opt]);
	   rpc_kthread[opt] = 0;
	   return RPC_FAIL;
	   }
	   else{
	   return RPC_OK;
	   } */
	if (send_mode & KRPC_BLOCK_MODE) {	/*for block mode */
		/* wait the result... */
		if (!wait_event_timeout(rpc_wq[opt], info.reply, TIMEOUT)) {
			pr_err("command %lx, kernel rpc timeout -> disable %s...\n",
			       command, rpc_kthread[opt]->comm);
#ifdef CONFIG_DEBUG_KERNEL_RPC
            dump_kernel_rpc_data(opt);
#endif
			kthread_stop(rpc_kthread[opt]);
			rpc_kthread[opt] = 0;
			up(&send_kernel_rpc_sem[opt]);
			return RPC_FAIL;
		} else {
			//pr_err(" #@# ret: %d \n", *retvalue); 
			up(&send_kernel_rpc_sem[opt]);
			return RPC_OK;
		}
	} else {
		up(&send_kernel_rpc_sem[opt]);
		return RPC_OK;
	}
}


EXPORT_SYMBOL(send_krpc);

int send_rpc_command(int opt, unsigned long command, unsigned long param1,
		     unsigned long param2, unsigned long *retvalue)
{
#ifdef CONFIG_SUPPORT_SCALER
	if(Scaler_GetRPCInitByVCPU() == true)/*VCPU RPC initialize fail.*/
		return RPC_FAIL;
	else
#endif

	return send_krpc(opt, KRPC_PROCEDUREID_KERNEL, KRPC_BLOCK_MODE, command,
			 param1, param2, retvalue);
}

EXPORT_SYMBOL(send_rpc_command);
#endif
