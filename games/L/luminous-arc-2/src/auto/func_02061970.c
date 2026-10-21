#include "m2c.h"

s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0216be68;
extern M2C_UNK data_0216ce68;

void func_02061970(void) {
    if (func_020cab60() != 2) {
        return;
    }
    M2C_FIELD(&data_0216be68, s8 *, 0xAC)  = 0;
    M2C_FIELD(&data_0216ce68, s8 *, 0xBAF) = 2;
}
