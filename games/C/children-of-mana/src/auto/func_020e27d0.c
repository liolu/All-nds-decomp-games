/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020e27d0(void *arg0) {
    s32 var_lr;
    void *var_ip;

    var_ip = arg0;
    var_lr = 0;
    do {
        var_lr += 1;
        if (M2C_FIELD(var_ip, s32 *, 0xC) != -1) {
            M2C_FIELD(var_ip, s32 *, 8)    = 1;
            M2C_FIELD(var_ip, s32 *, 0x2C) = (s32) M2C_FIELD(var_ip, s32 *, 0x14);
            M2C_FIELD(var_ip, s32 *, 0x30) = (s32) M2C_FIELD(var_ip, s32 *, 0x1C);
        }
        var_ip += 0x30;
    } while (var_lr < 8);
    M2C_FIELD(arg0, s32 *, 0x230) = 0;
    M2C_FIELD(arg0, s32 *, 0x234) = 0;
    M2C_FIELD(arg0, s32 *, 0x24C) = 0;
}
