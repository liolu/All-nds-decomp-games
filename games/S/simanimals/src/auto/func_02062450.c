#include "m2c.h"

s32 func_02061580();                                /* extern */
extern M2C_UNK data_0208e548;

void func_02062450(void) {
    M2C_FIELD(&data_0208e548, s32 *, 0x18) = func_02061580();
}
