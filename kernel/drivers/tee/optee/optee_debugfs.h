#ifndef _OPTEE_DEBUGFS_H
#define _OPTEE_DEBUGFS_H

void optee_debugfs_init(char *name);
void optee_debugfs_exit(void);
#ifdef CONFIG_OPTEE_SECURE_SVP_PROTECTION
int optee_carvedout_query(void);
#endif

#endif

