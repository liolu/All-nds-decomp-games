/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020641b0(M2C_UNK, s32, s32, s32);      /* extern */

void func_020272bc(void *arg0) {
    s32 var_r6;
    void *var_r5;

    var_r6 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x618) <= 0) {
        return;
    }
    var_r5 = arg0 + 0x18;
    do {
        func_020641b0(3, M2C_FIELD(var_r5, s32 *, 0), M2C_FIELD(var_r5, s32 *, 4), M2C_FIELD(var_r5, s32 *, 8));
        var_r6 += 1;
        var_r5 += 0xC;
    } while (var_r6 < (s32) M2C_FIELD(arg0, s32 *, 0x618));
}
