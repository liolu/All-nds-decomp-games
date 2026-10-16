#include "engine.h"
#include "m2c.h"

void func_02084af8(void);

extern M2C_UNK data_020e69c0;

void func_02088560(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 <= 0) {
        var_r0 = 0;
    }
    if (var_r0 > 0x7F) {
        var_r0 = 0x7F;
    }
    M2C_FIELD(&data_020e69c0, s32 *, 0x9C) = var_r0;
    func_02084af8();
}
