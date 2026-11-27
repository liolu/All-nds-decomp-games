/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern M2C_UNK data_020e5060;

s32 func_020900ac(s32 arg0, s32 arg1) {
    s32 var_ip;
    s32 var_lr;

    var_ip = 1;
    var_lr = 0;
loop_1:
    var_ip += *((M2C_UNK *) ((s8 *) &data_020e5060 + (var_lr * 4)));
    if (arg1 <= var_ip) {
        return var_lr;
    }
    var_lr += 1;
    if (var_lr >= 3) {
        return arg0;
    }
    goto loop_1;
}
