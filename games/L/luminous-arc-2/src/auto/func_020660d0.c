#include "m2c.h"

s32 func_020cab60();                                /* extern */
M2C_UNK func_020cd4d8();                            /* extern */
M2C_UNK func_020cd508(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_0216ce68;

void func_020660d0(void) {
    if (func_020cab60() != 3) {
        return;
    }
    M2C_FIELD(&data_0216ce68, s8 *, 0xBA5) = 0;
    func_020cd4d8();
    func_020cd508(2, 0x10, 0);
}
