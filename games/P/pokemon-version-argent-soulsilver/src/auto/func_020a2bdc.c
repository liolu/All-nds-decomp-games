#include "m2c.h"

s32 func_020a2c10();                                /* extern */
extern M2C_UNK data_021d46a0;

s32 func_020a2bdc(s32 arg0, s32 arg1) {
    if (func_020a2c10() == 0) {
        return -0x27;
    }
    M2C_FIELD(&data_021d46a0, s32 *, 0) = arg0;
    M2C_FIELD(&data_021d46a0, s32 *, 4) = arg1;
    return 0;
}
