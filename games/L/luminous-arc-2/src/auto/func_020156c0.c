#include "m2c.h"

extern M2C_UNK data_02150880;

s32 WM_SetIndCallback(M2C_UNK *);

s32 WM_SetLifeTime(M2C_UNK *, u16, u16, u16, s32);

M2C_UNK MBi_CheckWmErrcode(M2C_UNK, s32);

extern M2C_UNK mbi_life_frame;

extern M2C_UNK MBi_ParentCallback;

s32 func_020156c0(void) {
    s32 var_r0;
    s32 var_r2;
    s32 var_r3;

    var_r0 = 0;
    var_r3 = 0;
    var_r2 = 0;
    if ((M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), u16 *, 0x528) == 1) &&
        (M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), u8 *, 0x50C) == 0)) {
        var_r3 = 1;
    }
    if ((var_r3 != 0) && (M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), u16 *, 0x526) == 0)) {
        var_r2 = 1;
    }
    if ((var_r2 != 0) && (M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), u16 *, 0x52A) != 0)) {
        var_r0 = 1;
    }
    return var_r0;
}
