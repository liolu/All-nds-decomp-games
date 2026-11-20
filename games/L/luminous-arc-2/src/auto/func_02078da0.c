#include "m2c.h"

s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0216ce68;

void func_02078da0(void) {
    if (func_020cab60() != 3) {
        return;
    }
    M2C_FIELD(&data_0216ce68, u8 *, 0xBB1) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBB1) + 1);
}
