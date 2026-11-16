#include "m2c.h"

s32 func_020816c8();                                /* extern */
extern M2C_UNK data_020d8560;

void func_02082800(void) {
    M2C_FIELD(&data_020d8560, s32 *, 0x18) = func_020816c8();
}
