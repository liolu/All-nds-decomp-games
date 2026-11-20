#include "m2c.h"

s32 func_02002324();                                /* extern */
extern M2C_UNK data_020d0ba0;

void func_02003a5c(void) {
    M2C_FIELD(&data_020d0ba0, s32 *, 0x18) = func_02002324();
}
