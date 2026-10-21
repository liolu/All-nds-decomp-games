#include "m2c.h"

s32 func_020668a8(M2C_UNK);                         /* extern */
M2C_UNK func_02068910(M2C_UNK);                     /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_0216ce68;

s32 func_020682d8(void) {
    if (func_020668a8(0xF) != 0) {
        func_02068910(6);
        func_020caa3c(3, 1, 0x10);
        M2C_FIELD(&data_0216ce68, u8 *, 0xBA4) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBA4) + 1);
    }
    return 0;
}
