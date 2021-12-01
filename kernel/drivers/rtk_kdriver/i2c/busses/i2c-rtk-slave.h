#ifndef __RTK_I2C_SLAVE_H__
#define __RTK_I2C_SLAVE_H__

typedef struct
{
    unsigned short sar;
    unsigned long private_data;


    /*----------------------------------------------------------------------
     * Func : handle_command
     *
     * Desc : This function will be called as the i2c hardware received
     *        message from remote i2c master
     *
     * Parm : id     : i2c adapter index
     *        cmd    : command comes form i2c master
     *        len    : length of command (in bytes)
     *        stop   : slave rx stop flag
     * Retn : 0 : successed, others: failed
    *----------------------------------------------------------------------*/
    int (*handle_command) (int id, unsigned char *cmd, unsigned char len, unsigned char stop);


    /*----------------------------------------------------------------------
     * Func : read_data
     *
     * Desc : This function will be called as the i2c hardware got read request
     *        from remote i2c master.
     *
     * Parm : id     : i2c adapter index
     *
     * Retn : data to return
    *----------------------------------------------------------------------*/
    unsigned char (*read_data) (int id);


    /*----------------------------------------------------------------------
     * Func : stop
     *
     * Desc : This function will be called as the i2c hardware got stop
     *        from remote i2c master.
     *
     * Parm : id     : i2c adapter index
     *
     * Retn : data to return
    *----------------------------------------------------------------------*/
    void (*stop) (int id);
} rtk_i2c_slave_driver;


int  rtk_i2c_register_slave_driver(unsigned char id,rtk_i2c_slave_driver * p_drv);
void rtk_i2c_unregister_slave_driver(unsigned char id, rtk_i2c_slave_driver * p_drv);
int  rtk_i2c_slave_enable(unsigned char id, unsigned char on);

#endif
