/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200d76c(s32, M2C_UNK);                    /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_0210bca8;

void *func_02012574(void *arg0, M2C_UNK arg1) {
    s32 var_r0;
    s32 var_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffeb4;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210bca8;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0xA;
    var_r0                         = func_0203a6cc(0x10);
    if (var_r0 != 0) {
        var_r0 = func_0200d76c(var_r0, arg1);
    }
    M2C_FIELD(arg0, s32 *, 4) = var_r0;
    var_r0_2                  = func_0203a6cc(0x10);
    if (var_r0_2 != 0) {
        var_r0_2 = func_0200d76c(var_r0_2, arg1);
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r0_2;
    return arg0;
}
