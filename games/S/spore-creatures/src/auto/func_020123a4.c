#include "m2c.h"

M2C_UNK func_020123fc(M2C_UNK, s32);                /* extern */
M2C_UNK func_02093234(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0209b578(s32, M2C_UNK, M2C_UNK *);         /* extern */

void func_020123a4(M2C_UNK arg0, s32 arg1) {
    u8 sp0[36];

    func_02093234(sp0, 0, 0x21, 8);
    func_020123fc(arg0, func_0209b578(arg1 + 8, 0xA, sp0));
}
