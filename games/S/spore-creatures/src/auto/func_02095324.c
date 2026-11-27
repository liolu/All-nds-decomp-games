/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02095324(void *arg0, s32 arg1, s8 arg2) {
    u8 *var_ip;
    u8 var_r3;

    var_r3                   = 0;
    M2C_FIELD(arg0, s8 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 5) = arg2;
    var_ip                   = M2C_FIELD(arg0, u8 **, 0);
    if (arg2 == 0) {
        return;
    }
    do {
        var_r3 += 1;
        *var_ip = var_r3;
        var_ip += arg1;
    } while (var_r3 != arg2);
}
