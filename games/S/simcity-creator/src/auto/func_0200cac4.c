#include "m2c.h"

M2C_UNK func_02008380();                            /* extern */
M2C_UNK func_0200848c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020084d8(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020d2d18;
extern M2C_UNK func_0200cc90;

void func_0200cac4(void) {
    if (M2C_FIELD(&data_020d2d18, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_020d2d18, u16 *, 0)    = 1U;
    M2C_FIELD(&data_020d2d18, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_020d2d18, s32 *, 0x10) = 0;
    M2C_FIELD(&data_020d2d18, s32 *, 0x28) = 0;
    M2C_FIELD(&data_020d2d18, s32 *, 0x14) = 0;
    M2C_FIELD(&data_020d2d18, s32 *, 0x18) = 0;
    func_02008380();
    do {

    } while (func_020084d8(5, 1) == 0);
    func_0200848c(5, &func_0200cc90);
}
