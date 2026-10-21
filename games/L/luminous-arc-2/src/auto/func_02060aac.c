#include "m2c.h"

s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0216be68;

void func_02060aac(void) {
    if (func_020cab60() != 2) {
        return;
    }
    M2C_FIELD(&data_0216be68, u8 *, 0xAA) = (u8) (M2C_FIELD(&data_0216be68, u8 *, 0xAA) + 1);
}
