#include <linux/init.h>
#include <linux/module.h>
#include <linux/proc_fs.h>
#include <linux/seq_file.h>
#include <linux/uaccess.h>
#include <linux/slab.h>
#include <linux/pm.h>

static const char * const power_on_type[] = {
        [POWER_ON_AC] = "AC_ON",
        [POWER_ON_DC] = "DC_ON",
};
static const char * const stage_type[] = {
        [PM_STAGE_BOOTCODE] = "BOOTCODE",
        [PM_STAGE_KERNEL]   = "KERNEL",
};

struct pm_resume_info  pm_resume_time[POWER_ON_MAX][PM_STAGE_MAX];

void pm_resume_set_starttime(enum power_on_type power,
                    enum pm_stage_type stage, unsigned long long ns) {
        pm_resume_time[power][stage].start = div_u64(ns, 1000);
        return;
}

void pm_resume_set_endtime(enum power_on_type power,
                    enum pm_stage_type stage, unsigned long long ns) {
        struct pm_resume_info *resume_info = NULL;
        resume_info = &(pm_resume_time[power][stage]);

        if ((stage == PM_STAGE_KERNEL) && (power == POWER_ON_DC)
                && (resume_info->start <= 0))
                resume_info->end = 0;
        else
                resume_info->end = div_u64(ns, 1000);
        return;
}

static void pm_show_stage_resume_list(struct seq_file *buf)
{
        struct seq_file *s = buf;
        unsigned int i = 0;
        unsigned int j = 0;
        struct pm_resume_info *resume_info = NULL;

        for (i = 0; i < POWER_ON_MAX; i++) {
                for(j = 0; j < PM_STAGE_MAX; j++) {
                        resume_info = &(pm_resume_time[i][j]);
                        resume_info->elapsed = resume_info->end - resume_info->start;
                        seq_printf(s, "%10llu usec:%s,%s\n",
                                    (resume_info->elapsed & ULONG_MAX) ,
                                    power_on_type[i], stage_type[j]);
                }
        }
        return;
}

/*
 * seq_start() takes a position as an argument and returns an iterator which
 * will start reading at that position.
 */
static void* seq_start(struct seq_file *s, loff_t *pos)
{
        return *pos < 1 ? (void *)1 : NULL;
}

/*
 * move the iterator forward to the next position in the sequence
 */
static void* seq_next(struct seq_file *s, void *v, loff_t *pos)
{
        ++*pos;
        return NULL;
}

/**
 * stop() is called when iteration is complete (clean up)
 */
static void seq_stop(struct seq_file *s, void *v)
{
}

/*
 *  success return 0, otherwise return error code
 */
static int seq_show(struct seq_file *s, void *v)
{
#ifdef CONFIG_PM_RESUME_TIME
    pm_show_stage_resume_list(s);
    dpm_show_dev_resume_list(s);
#endif
    return 0;
}

static struct seq_operations pm_profiling_seq_ops = {
    .start = seq_start,
    .next  = seq_next,
    .stop  = seq_stop,
    .show  = seq_show
};

static int pm_profiling_open(struct inode *inode, struct file *file)
{
    return seq_open(file, &pm_profiling_seq_ops);
}

static struct file_operations pm_profiling_proc_ops = {
    .owner   = THIS_MODULE,
    .open    = pm_profiling_open,
    .read    = seq_read,
    .llseek  = seq_lseek,
    .release = seq_release
};

static int __init proc_pm_profiling_init(void)
{
    proc_create("pm_profiling", 0, NULL, &pm_profiling_proc_ops);
    return 0;
}
fs_initcall(proc_pm_profiling_init);
