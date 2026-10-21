#include "m2c.h"

s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0216bc68;

s32 func_0205ab38(void) {
    if (func_020cab60() == 3) {
        M2C_FIELD(&data_0216bc68, u8 *, 0xA) = (u8) (M2C_FIELD(&data_0216bc68, u8 *, 0xA) + 2);
    }
    return 0xFFFF;
}
