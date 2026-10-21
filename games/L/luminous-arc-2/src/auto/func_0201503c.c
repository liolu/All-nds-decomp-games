#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214ade0;

void func_0201503c(s32 arg0) {
    s32 var_r1;
    s32 var_r2;

    var_r2 = M2C_FIELD(&data_0214ade0, s32 *, 0x18);
    if (var_r2 == 0) {
        M2C_FIELD(&data_0214ade0, s32 *, 0x18) = arg0;
    } else {
        var_r1 = M2C_FIELD(var_r2, s32 *, 0x4BC);
        if (var_r1 != 0) {
            do {
                var_r2 = var_r1;
                var_r1 = M2C_FIELD(var_r1, s32 *, 0x4BC);
            } while (var_r1 != 0);
        }
        M2C_FIELD(var_r2, s32 *, 0x4BC) = arg0;
    }
    M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
}
