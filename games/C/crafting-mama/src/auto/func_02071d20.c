#include "m2c.h"

extern M2C_UNK data_0208276c;
extern M2C_UNK data_020827e4;

s32 func_02071d20(s32 arg0, s32 arg1) {
    M2C_UNK *var_r2;

    var_r2 = &data_020827e4;
    if (arg0 != 0) {
        var_r2 = &data_0208276c;
    }
    return (arg1 * 0x18) + (s32) var_r2;
}
