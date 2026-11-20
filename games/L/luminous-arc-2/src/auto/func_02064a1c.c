#include "m2c.h"

s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0216be68;

void func_02064a1c(void) {
    if (func_020cab60() == 1) {
        M2C_FIELD(&data_0216be68, s8 *, 0xAD) = 5;
    }
}
