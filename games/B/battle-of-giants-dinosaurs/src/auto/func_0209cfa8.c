#include "m2c.h"

s32 func_0209c890(s32, M2C_UNK, M2C_UNK, M2C_UNK, void *, s32); /* extern */
M2C_UNK func_0209daa4(void *, void *);              /* extern */
extern M2C_UNK data_020d3cc4;

s32 func_0209cfa8(void *arg0, M2C_UNK arg1) {
    s32 var_r0;

    var_r0 = func_0209c890(M2C_FIELD(&data_020d3cc4, s32 *, 0x3C), 0, arg1, 7, arg0, M2C_FIELD(arg0, s32 *, 0xC));
    if (var_r0 == 0) {
        func_0209daa4(arg0, arg0 + 0x2C);
        var_r0 = func_0209c890(M2C_FIELD(&data_020d3cc4, s32 *, 0x3C), 0, arg1, 7, arg0, M2C_FIELD(arg0, s32 *, 0xC));
    }
    if (var_r0 == 0) {
        var_r0 = -1;
    }
    return var_r0;
}
