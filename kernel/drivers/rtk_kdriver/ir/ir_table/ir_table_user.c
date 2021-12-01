#include "ir_input.h"

#define MAX_IR_USER_KEY_NUM   511

static unsigned long g_ir_boot_memory_address = 0;
IR_USER_KEY_TABLE g_ir_user_key_table = {
    .keys = NULL,
    .size = 0,
    .is_init = 0,
};

int venus_ir_user_key_table_init(void)
{
    unsigned long flags = 0;
    IR_USER_KEY *keys = NULL;

    if(g_ir_user_key_table.is_init)
        return 0;
    
    keys = (IR_USER_KEY *)kmalloc(sizeof(IR_USER_KEY) * MAX_IR_USER_KEY_NUM, GFP_KERNEL);
    if(!keys)
        return -1;
    g_ir_boot_memory_address = 0;
    rwlock_init(&g_ir_user_key_table.lock);
    write_lock_irqsave(&g_ir_user_key_table.lock, flags);
    g_ir_user_key_table.keys = keys;
    g_ir_user_key_table.size = 0;
    g_ir_user_key_table.is_init = 1;
    write_unlock_irqrestore(&g_ir_user_key_table.lock, flags);
    return 0;
}

void venus_ir_user_key_table_uninit(void)
{
    unsigned long flags = 0;
    write_lock_irqsave(&g_ir_user_key_table.lock, flags);
    g_ir_user_key_table.size = 0;
    if(g_ir_boot_memory_address == 0 && g_ir_user_key_table.keys) {
        kfree(g_ir_user_key_table.keys);
        g_ir_user_key_table.keys = NULL;
    }
    write_unlock_irqrestore(&g_ir_user_key_table.lock, flags);
}
    
unsigned int venus_ir_user_key_table_find_scancode(unsigned short protocol, unsigned short keycode)
{
    unsigned int i = 0;
    unsigned int scancode = 0;
    unsigned long flags = 0;
    
    read_lock_irqsave(&g_ir_user_key_table.lock, flags);
    for(i = 0; i < g_ir_user_key_table.size; i++) {
	if(g_ir_user_key_table.keys[i].protocol == protocol 
		&& g_ir_user_key_table.keys[i].keycode == keycode) {
		scancode = g_ir_user_key_table.keys[i].scancode;
		break;
	}
    }
    read_unlock_irqrestore(&g_ir_user_key_table.lock, flags);
    return scancode;
}

unsigned int venus_ir_user_key_table_find_scancodes(unsigned short protocol, unsigned short keycode,
                                        unsigned int *scancode_arrays, unsigned int array_len)
{
    unsigned int i = 0;
    unsigned long flags = 0;
    unsigned int num = 0;
    if(!scancode_arrays || !array_len)
        return 0;
    
    read_lock_irqsave(&g_ir_user_key_table.lock, flags);
    for(i = 0; i < g_ir_user_key_table.size; i++) {
	if(g_ir_user_key_table.keys[i].protocol == protocol 
		&& g_ir_user_key_table.keys[i].keycode == keycode) {
		scancode_arrays[num] = g_ir_user_key_table.keys[i].scancode;
                num++;
                if(num >= array_len)
		    break;
	}
    }
    read_unlock_irqrestore(&g_ir_user_key_table.lock, flags);
    return num;
}

unsigned short venus_ir_user_key_table_getkeycode_by_scancode(unsigned int scancode, 
                                                                                                        unsigned int *p_index, unsigned int *p_protocol)
{
    unsigned short keycode = KEY_RESERVED;
    unsigned long flags = 0;
    int low = 0, high = 0, mid = 0;
    
    read_lock_irqsave(&g_ir_user_key_table.lock, flags);
    
    if(g_ir_user_key_table.size) {	
        low = 0;
        high = g_ir_user_key_table.size - 1;
        while ( low <= high){
            mid = (low + high) / 2;
            if (scancode < g_ir_user_key_table.keys[mid].scancode) {
                high = mid - 1;
            } else if(scancode > g_ir_user_key_table.keys[mid].scancode){
                low = mid + 1;
            } else {
                keycode = g_ir_user_key_table.keys[mid].keycode;
                if(p_index)
                    *p_index = mid;
                if(p_protocol)
                    *p_protocol = g_ir_user_key_table.keys[mid].protocol;
                break;
            }
        }
    }
    read_unlock_irqrestore(&g_ir_user_key_table.lock, flags);
    return keycode;
}

unsigned short venus_ir_user_key_table_getkeycode_by_index(unsigned int index, 
                                                                                    unsigned int *p_scancode, unsigned int *p_protocol)
{
    unsigned short keycode = KEY_RESERVED;
    unsigned long flags = 0;
    
    read_lock_irqsave(&g_ir_user_key_table.lock, flags);
    
    if(index < g_ir_user_key_table.size) {	
        keycode = g_ir_user_key_table.keys[index].keycode;
        if(p_scancode)
            *p_scancode = g_ir_user_key_table.keys[index].scancode;
        if(p_protocol)
            *p_protocol = g_ir_user_key_table.keys[index].protocol;
    }
    read_unlock_irqrestore(&g_ir_user_key_table.lock, flags);
    return keycode;
}

int venus_ir_user_key_table_setkeycode(unsigned int scancode, 
                                                                                    unsigned int keycode, unsigned int protocol, 
                                                                                    unsigned int *old_keycode)
{
    int ret = -1;
    unsigned int i = 0;
    unsigned long flags = 0;
    
    write_lock_irqsave(&g_ir_user_key_table.lock, flags);
    for(i = 0; i < g_ir_user_key_table.size; i++) {
        if(g_ir_user_key_table.keys[i].scancode >= scancode)
            break;
    }
    if(i < g_ir_user_key_table.size) {
        if(g_ir_user_key_table.keys[i].scancode == scancode) {
                if(old_keycode)
                    *old_keycode =  g_ir_user_key_table.keys[i].keycode;
                g_ir_user_key_table.keys[i].keycode = keycode;
                g_ir_user_key_table.keys[i].protocol = protocol;
                ret = 0;
        } else {
            if(g_ir_user_key_table.size < MAX_IR_USER_KEY_NUM) {
                unsigned int j = 0;
                for(j = g_ir_user_key_table.size - 1; j >= i; j--)
                    g_ir_user_key_table.keys[j+1] = g_ir_user_key_table.keys[j];
                g_ir_user_key_table.keys[i].scancode = scancode;
                g_ir_user_key_table.keys[i].keycode = keycode;
                g_ir_user_key_table.keys[i].protocol= protocol;
                g_ir_user_key_table.size++;
                if(old_keycode)
                    *old_keycode =  KEY_CNT;
                ret = 0;
            }
        }
    } else {
        if(g_ir_user_key_table.size < MAX_IR_USER_KEY_NUM) {
            g_ir_user_key_table.keys[g_ir_user_key_table.size].scancode = scancode;
            g_ir_user_key_table.keys[g_ir_user_key_table.size].keycode = keycode;
            g_ir_user_key_table.keys[g_ir_user_key_table.size].protocol= protocol;
            g_ir_user_key_table.size++;
            if(old_keycode)
                *old_keycode =  KEY_CNT;
            ret = 0;
        }
    }
    write_unlock_irqrestore(&g_ir_user_key_table.lock, flags);
    return ret;
}


int venus_ir_user_key_table_check_keycode_exist(unsigned int keycode)
{
    int ret = -1;
    unsigned int i = 0;
    unsigned long flags = 0;
    
    read_lock_irqsave(&g_ir_user_key_table.lock, flags);
    for(i = 0; i < g_ir_user_key_table.size; i++) {
	if(g_ir_user_key_table.keys[i].keycode == keycode) {
		ret = 0;
		break;
	}
    }
    read_unlock_irqrestore(&g_ir_user_key_table.lock, flags);
    return ret;
}

void __init venus_ir_input_early_init(void)
{
    unsigned int *ir_boot_table = NULL;
    
    //carvedout_buf_query(CARVEDOUT_IR_TABLE, &ir_boot_table);
    if(g_ir_boot_memory_address) {
        ir_boot_table = (unsigned int *)phys_to_virt (g_ir_boot_memory_address);
        if(!ir_boot_table) {
            g_ir_boot_memory_address = 0;
            return;
        }
        IR_INFO("venus_ir_input__table_parse: %p, %x,%x\n", ir_boot_table, ir_boot_table[0], ir_boot_table[1]);
        rwlock_init(&g_ir_user_key_table.lock);
        g_ir_user_key_table.keys = (IR_USER_KEY *)(ir_boot_table + 2);
        if(ir_boot_table[0] == 0x49525442 &&  ir_boot_table[1] > 0 
                && ir_boot_table[1] <= MAX_IR_USER_KEY_NUM) {
            g_ir_user_key_table.size = ir_boot_table[1];
        } else {
            g_ir_user_key_table.size = 0;
        }
        g_ir_user_key_table.is_init = 1;
    }
}


static int __init venus_ir_input_table_addr_parse(char *options)
{	
    unsigned long ir_table_phy_address = 0;
    
    if(options == NULL)
        return 0;  
  
    if (sscanf(options, "%lx", &ir_table_phy_address) != 1)
        return 0;
	
    g_ir_boot_memory_address = ir_table_phy_address;
    IR_INFO("g_ir_boot_memory_address == %lx\n", g_ir_boot_memory_address);
    return 0;
}

early_param("ir_table", venus_ir_input_table_addr_parse);

