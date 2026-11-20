/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02034820(s32, M2C_UNK);                    /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020c3628;

void *func_020382a4(void *arg0, M2C_UNK arg1) {
    s32 var_r0;
    s32 var_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c3628;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0xA;
    var_r0                         = func_0207b068(0x10);
    if (var_r0 != 0) {
        var_r0 = func_02034820(var_r0, arg1);
    }
    M2C_FIELD(arg0, s32 *, 4) = var_r0;
    var_r0_2                  = func_0207b068(0x10);
    if (var_r0_2 != 0) {
        var_r0_2 = func_02034820(var_r0_2, arg1);
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r0_2;
    return arg0;
}
