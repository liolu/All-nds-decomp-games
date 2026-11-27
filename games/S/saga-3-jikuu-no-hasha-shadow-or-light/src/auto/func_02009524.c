#include "m2c.h"

s32 func_0200e510(M2C_UNK, M2C_UNK *);              /* extern */
extern M2C_UNK data_0210e538;

s32 func_02009524(s32 arg0, M2C_UNK arg1) {
    if (func_0200e510(arg1, &data_0210e538) != 0) {
        return arg0 + 0xC;
    }
    return 0;
}
