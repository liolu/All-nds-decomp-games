#include "m2c.h"

s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0216be68;

void func_0205f8e4(void) {
    if (func_020cab60() != 2) {
        return;
    }
    M2C_FIELD(&data_0216be68, u8 *, 0xAE) = (u8) (M2C_FIELD(&data_0216be68, u8 *, 0xAE) + 1);
}
