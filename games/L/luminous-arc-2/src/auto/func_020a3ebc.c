#include "m2c.h"

M2C_UNK func_02058930(M2C_UNK);                     /* extern */
s32 func_02058f40();                                /* extern */

void func_020a3ebc(void *arg0) {
    if (func_02058f40() != 1) {
        return;
    }
    func_02058930(0x12);
    M2C_FIELD(arg0, u8 *, 0x77B) = (u8) (M2C_FIELD(arg0, u8 *, 0x77B) + 1);
}
