#include "m2c.h"

extern M2C_UNK data_020cc620;

s32 func_0204968c(s32 arg0, s32 *arg1) {
    if (M2C_FIELD(&data_020cc620, s32 *, 0x88) != 0) {
        *arg1 = 1;
    }
    return 1;
}
