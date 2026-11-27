#include "m2c.h"

s32 func_0200be84(s32, void *, u16);                /* extern */
extern M2C_UNK data_0209b23c;

s32 func_0200e2ac(void *arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r2;

    var_r2 = -1;
    var_r0 = 0;
    if ((arg1 >= 0x1A) && (arg1 <= 0x29)) {
        var_r2 = arg1 - 0x1A;
        var_r0 = M2C_FIELD(M2C_FIELD(&data_0209b23c, void **, 4), s32 *, 8);
    } else if ((arg1 >= 0x2A) && (arg1 <= 0x39)) {
        var_r2 = arg1 - 0x2A;
        var_r0 = M2C_FIELD(M2C_FIELD(&data_0209b23c, void **, 4), s32 *, 0xC);
    }
    if ((var_r2 >= 0) && (var_r0 != 0) && (func_0200be84(var_r0, arg0, (u16) var_r2) != 0)) {
        return 1;
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    return 0;
}
