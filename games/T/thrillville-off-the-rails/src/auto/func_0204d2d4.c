#include "m2c.h"

M2C_UNK func_02091380(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK func_0204c468;
extern M2C_UNK func_0204d35c;

void *func_0204d2d4(void *arg0) {
    u32 temp_r1;
    u32 var_r0;
    void *var_r2;

    func_02091380(arg0, 0x40, 0x30, &func_0204d35c, &func_0204c468);
    M2C_FIELD(arg0, s32 *, 0x34) = 1;
    M2C_FIELD(arg0, s32 *, 0x30) = 1;
    var_r2                       = arg0 + 0x60;
    var_r0                       = 2;
    do {
        temp_r1                     = var_r0 + 1;
        M2C_FIELD(var_r2, u32 *, 0) = temp_r1;
        M2C_FIELD(var_r2, s32 *, 4) = (s32) (var_r0 - 1);
        var_r0                      = temp_r1;
        var_r2 += 0x30;
    } while (temp_r1 < 0x40U);
    M2C_FIELD(arg0, s32 *, 0)     = 2;
    M2C_FIELD(arg0, s32 *, 4)     = 0x3F;
    M2C_FIELD(arg0, s32 *, 0x64)  = 0;
    M2C_FIELD(arg0, s32 *, 0xBD0) = 0;
    return arg0;
}
