/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02034820(s32, M2C_UNK);                    /* extern */
s32 func_020382a4(s32, M2C_UNK);                    /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */

void *func_02037ce8(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;

    var_r0 = func_0207b068(0x10);
    if (var_r0 != 0) {
        var_r0 = func_02034820(var_r0, 0x80);
    }
    M2C_FIELD(arg0, s32 *, 0) = var_r0;
    var_r0_2                  = func_0207b068(0x14);
    if (var_r0_2 != 0) {
        var_r0_2 = func_020382a4(var_r0_2, 4);
    }
    M2C_FIELD(arg0, s32 *, 4) = var_r0_2;
    var_r0_3                  = func_0207b068(0x14);
    if (var_r0_3 != 0) {
        var_r0_3 = func_020382a4(var_r0_3, 0x96);
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r0_3;
    var_r0_4                  = func_0207b068(0x14);
    if (var_r0_4 != 0) {
        var_r0_4 = func_020382a4(var_r0_4, 0x64);
    }
    M2C_FIELD(arg0, s32 *, 0x14) = var_r0_4;
    var_r0_5                     = func_0207b068(0x14);
    if (var_r0_5 != 0) {
        var_r0_5 = func_020382a4(var_r0_5, 0x96);
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r0_5;
    var_r0_6                     = func_0207b068(0x14);
    if (var_r0_6 != 0) {
        var_r0_6 = func_020382a4(var_r0_6, 0x64);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r0_6;
    var_r0_7                     = func_0207b068(0x14);
    if (var_r0_7 != 0) {
        var_r0_7 = func_020382a4(var_r0_7, 0x64);
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_r0_7;
    return arg0;
}
