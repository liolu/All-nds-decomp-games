#include "m2c.h"

M2C_UNK func_0202b300(M2C_UNK *, M2C_UNK *, s32, M2C_UNK); /* extern */
M2C_UNK func_020cfae8(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020effec;

void func_02032c8c(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[512];

    func_0202b300(&data_020effec, sp0, *(u16 *) 0x04001008 | 0x80000000, 0x10);
    func_020cfae8(arg0, sp0, arg1, 0x10);
}
