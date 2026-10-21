#include "m2c.h"

M2C_UNK func_0201b0f4(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0202b300(M2C_UNK *, M2C_UNK *, s32, M2C_UNK); /* extern */
M2C_UNK func_020cfae8(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_0210dfe4;

void func_02062944(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 sp40[512];
    u8 sp0[64];

    func_0201b0f4(sp0, &data_0210dfe4, arg1);
    func_0202b300(sp0, sp40, *(u16 *) 0x04001008 | 0x80000000, 0x10);
    func_020cfae8(arg0, sp40, arg2, 0x10);
}
