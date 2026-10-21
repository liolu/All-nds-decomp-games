#include "m2c.h"

M2C_UNK func_02058930(s32);                         /* extern */
s32 func_020844a0();                                /* extern */

void func_020a4668(void *arg0) {
    if (func_020844a0() == 2) {
        func_02058930(0x14);
        M2C_FIELD(arg0, u8 *, 0x77B) = (u8) (M2C_FIELD(arg0, u8 *, 0x77B) + 1);
        return;
    }
    func_02058930(0xFFFE);
    M2C_FIELD(arg0, u8 *, 0x77B) = 0xFU;
}
