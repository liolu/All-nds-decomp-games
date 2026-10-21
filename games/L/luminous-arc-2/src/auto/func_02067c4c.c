#include "m2c.h"

s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0216ce68;

s32 func_02067c4c(void) {
    if (func_020cab60() != 0) {
        M2C_FIELD(&data_0216ce68, u8 *, 0xBA4) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBA4) + 1);
    }
    return 0;
}
