#include "m2c.h"

s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0216ce68;

void func_02078d7c(void) {
    if (func_020cab60() == 3) {
        M2C_FIELD(&data_0216ce68, s8 *, 0xBB1) = 0x10;
    }
}
