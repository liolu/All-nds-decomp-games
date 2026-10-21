#include "m2c.h"

s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0216ce68;

void func_02065e5c(void) {
    if (func_020cab60() == 3) {
        M2C_FIELD(&data_0216ce68, s8 *, 0xBA5) = 0;
    }
}
