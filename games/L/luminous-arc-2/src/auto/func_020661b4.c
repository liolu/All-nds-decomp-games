#include "m2c.h"

s32 func_02037798(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_020ca99c();                            /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0210e6b4;
extern M2C_UNK data_0216ce68;

void func_020661b4(void) {
    if (func_020cab60() != 3) {
        return;
    }
    if (func_02037798(&data_0210e6b4, 0) == 0) {
        return;
    }
    func_020caa3c(3, 1, 0x10);
    func_020ca99c();
    M2C_FIELD(&data_0216ce68, u8 *, 0xBA5) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBA5) + 1);
}
