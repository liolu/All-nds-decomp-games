#include "m2c.h"

s32 func_020cab60();                                /* extern */
s32 func_020d4904(M2C_UNK);                         /* extern */
M2C_UNK func_020d4cf4();                            /* extern */
extern M2C_UNK data_0216ce68;

void func_020d426c(void) {
    if (func_020cab60() != 3) {
        return;
    }
    if (func_020d4904(0) != 0) {
        M2C_FIELD(&data_0216ce68, u8 *, 0xBAA) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBAA) + 1);
    }
    func_020d4cf4();
}
