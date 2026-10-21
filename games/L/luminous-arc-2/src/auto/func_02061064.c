#include "m2c.h"

s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0216be68;

void func_02061064(void) {
    if (func_020cab60() == 1) {
        M2C_FIELD(&data_0216be68, u8 *, 0xAA) = (u8) M2C_FIELD(&data_0216be68, u8 *, 0xB3);
    }
}
