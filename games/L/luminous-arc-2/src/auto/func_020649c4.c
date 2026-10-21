#include "m2c.h"

s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0216be68;

void func_020649c4(void) {
    if (func_020cab60() != 1) {
        return;
    }
    M2C_FIELD(&data_0216be68, s8 *, 0xB3) = 0xD;
    M2C_FIELD(&data_0216be68, s8 *, 0xAD) = 2;
}
