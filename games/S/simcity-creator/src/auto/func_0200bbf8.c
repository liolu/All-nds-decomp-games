#include "m2c.h"

M2C_UNK func_02008380();                            /* extern */
M2C_UNK func_0200848c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020084d8(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020d2c8c;
extern M2C_UNK func_0200bd58;

void func_0200bbf8(void) {
    if (M2C_FIELD(&data_020d2c8c, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_020d2c8c, u16 *, 0) = 1U;
    M2C_FIELD(&data_020d2c8c, s32 *, 4) = 0;
    M2C_FIELD(&data_020d2c8c, s32 *, 8) = 0;
    func_02008380();
    do {

    } while (func_020084d8(9, 1) == 0);
    *(s32 *) 0x027FFF90 = 0;
    func_0200848c(9, &func_0200bd58);
}
