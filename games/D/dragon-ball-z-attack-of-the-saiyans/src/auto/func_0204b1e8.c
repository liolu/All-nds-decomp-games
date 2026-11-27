#include "m2c.h"

extern M2C_UNK data_020cc620;

s32 func_0204b1e8(s32 arg0, s32 *arg1) {
    if (M2C_FIELD(&data_020cc620, u16 *, 0x5A) != 0) {
        *arg1 = 1;
    }
    return 1;
}
