#include "m2c.h"

s32 func_020cab60();                                /* extern */
extern M2C_UNK data_02158048;

void func_0205bac8(void) {
    if (func_020cab60() != 3) {
        return;
    }
    M2C_FIELD(&data_02158048, u8 *, 1) = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
}
