#include "m2c.h"

s32 func_0200b018(void *arg0) {
    s32 var_ip;
    s32 var_lr;

    if (!(M2C_FIELD(arg0, u8 *, 4) & 1)) {
        var_ip = 0x20;
        var_lr = 0x20;
    } else {
        var_ip = 0x200;
        var_lr = 0x40;
    }
    return (M2C_FIELD(arg0, u16 *, 6) * var_lr) + ((var_ip * M2C_FIELD(arg0, u8 *, 5)) + (s32) (arg0 + 8));
}
