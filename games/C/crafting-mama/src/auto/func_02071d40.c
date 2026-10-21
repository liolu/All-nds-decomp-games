#include "m2c.h"

extern M2C_UNK data_020826e0;
extern M2C_UNK data_02082718;

s32 func_02071d40(s32 arg0, s32 arg1) {
    M2C_UNK *var_r2;

    var_r2 = &data_020826e0;
    if (arg0 != 0) {
        var_r2 = &data_02082718;
    }
    return (arg1 * 0x1C) + (s32) var_r2;
}
