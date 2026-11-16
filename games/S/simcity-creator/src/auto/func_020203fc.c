/* compiler: 1.2/sp3 -O2,p */
#include "m2c.h"

s32 func_02073b8c(s32);                             /* extern */
M2C_UNK func_02074fe4(s32, s32, s32);               /* extern */

void func_020203fc(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r5;
    s32 var_r4;

    temp_r5 = func_02073b8c(M2C_FIELD(arg0, s32 *, 0x34E8));
    var_r4  = 0;
    do {
        func_02074fe4(temp_r5, var_r4, M2C_FIELD((arg3 + (var_r4 * 4)), s32 *, 0x34280));
        var_r4 += 1;
    } while (var_r4 < 0xC);
}
