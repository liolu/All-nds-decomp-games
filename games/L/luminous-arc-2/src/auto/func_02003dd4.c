#include "m2c.h"

s32 func_0200270c();                                /* extern */
extern M2C_UNK data_02147840;

void func_02003dd4(void) {
    M2C_FIELD(&data_02147840, s32 *, 0x18) = func_0200270c();
}
