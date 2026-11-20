#include "m2c.h"

M2C_UNK func_020ca99c();                            /* extern */
s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0216ce68;

void func_020664e4(void) {
    if (func_020cab60() != 3) {
        return;
    }
    func_020ca99c();
    M2C_FIELD(&data_0216ce68, s8 *, 0xBA5) = 6;
}
