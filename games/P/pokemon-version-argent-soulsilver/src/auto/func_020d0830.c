#include "m2c.h"

s32 func_020ce998();                                /* extern */
extern M2C_UNK data_021e15fc;

void func_020d0830(void) {
    M2C_FIELD(&data_021e15fc, s32 *, 0x18) = func_020ce998();
}
