#include "m2c.h"

s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0216be68;

void func_020c65e0(void) {
    if (M2C_FIELD(&data_0216be68, u8 *, 0xB4) == 0) {
        if (func_020cab60() != 2) {
            return;
        }
        M2C_FIELD(&data_0216be68, u8 *, 0xAB) = (u8) (M2C_FIELD(&data_0216be68, u8 *, 0xAB) + 1);
        return;
    }
    if (func_020cab60() != 3) {
        return;
    }
    M2C_FIELD(&data_0216be68, u8 *, 0xB4) = 0U;
    M2C_FIELD(&data_0216be68, u8 *, 0xAB) = (u8) (M2C_FIELD(&data_0216be68, u8 *, 0xAB) + 1);
}
