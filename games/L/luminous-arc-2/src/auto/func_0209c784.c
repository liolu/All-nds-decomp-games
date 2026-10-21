#include "m2c.h"

s32 func_0209c7b8();                                /* extern */
extern M2C_UNK data_02170d64;

s32 func_0209c784(s32 arg0, s32 arg1) {
    if (func_0209c7b8() == 0) {
        return -0x27;
    }
    M2C_FIELD(&data_02170d64, s32 *, 0) = arg0;
    M2C_FIELD(&data_02170d64, s32 *, 4) = arg1;
    return 0;
}
