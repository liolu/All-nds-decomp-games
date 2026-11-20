/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200d76c(s32, M2C_UNK);                    /* extern */
s32 func_02012574(s32, M2C_UNK);                    /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */

void *func_0201c0f4(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;

    var_r0 = func_0203a6cc(0x10);
    if (var_r0 != 0) {
        var_r0 = func_0200d76c(var_r0, 0x22);
    }
    M2C_FIELD(arg0, s32 *, 0) = var_r0;
    var_r0_2                  = func_0203a6cc(0x14);
    if (var_r0_2 != 0) {
        var_r0_2 = func_02012574(var_r0_2, 0xA);
    }
    M2C_FIELD(arg0, s32 *, 4) = var_r0_2;
    var_r0_3                  = func_0203a6cc(0x14);
    if (var_r0_3 != 0) {
        var_r0_3 = func_02012574(var_r0_3, 0x10);
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r0_3;
    var_r0_4                  = func_0203a6cc(0x14);
    if (var_r0_4 != 0) {
        var_r0_4 = func_02012574(var_r0_4, 8);
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_r0_4;
    return arg0;
}
