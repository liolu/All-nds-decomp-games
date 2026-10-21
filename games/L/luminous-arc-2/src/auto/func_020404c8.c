#include "m2c.h"

extern void *data_02175a48;

u32 func_020404c8(s32 arg0, s32 arg1) {
    u32 var_ip;
    void *var_lr;

    var_ip = 0;
    var_lr = data_02175a48;
loop_1:
    if ((M2C_FIELD(var_lr, u16 *, 0x1AA0) & 0x8000) && (arg0 == M2C_FIELD(var_lr, u8 *, 0x1ABF)) &&
        (arg1 == M2C_FIELD(var_lr, u8 *, 0x1AC0))) {
        return var_ip;
    }
    var_ip += 1;
    var_lr += 0x44;
    if (var_ip >= 0x91U) {
        return -1U;
    }
    goto loop_1;
}
