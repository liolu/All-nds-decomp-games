#include "m2c.h"

s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0216ce68;

void func_0206351c(void) {
    if (func_020cab60() == 2) {
        M2C_FIELD(&data_0216ce68, s8 *, 0xBAF) = 0;
    }
}
