#include "m2c.h"

s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0216be68;
extern M2C_UNK data_0216ce68;

void func_020653b8(void) {
    if (func_020cab60() != 3) {
        return;
    }
    M2C_FIELD(&data_0216be68, s8 *, 0x10)  = 0;
    M2C_FIELD(&data_0216ce68, u8 *, 0xBA5) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBA5) + 1);
}
