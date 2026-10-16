#include "m2c.h"

M2C_UNK func_02008380();                            /* extern */
M2C_UNK func_0200848c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020084d8(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020d0fc8;
extern M2C_UNK func_020067cc;

void func_02006778(void) {
    if (M2C_FIELD(&data_020d0fc8, u16 *, 2) != 0) {
        return;
    }
    M2C_FIELD(&data_020d0fc8, u16 *, 2) = 1U;
    func_02008380();
    do {

    } while (func_020084d8(0xC, 1) == 0);
    func_0200848c(0xC, &func_020067cc);
}
