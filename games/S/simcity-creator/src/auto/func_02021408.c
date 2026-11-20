#include "m2c.h"

M2C_UNK func_02006ee8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0201c9ec(s32, M2C_UNK, void *, M2C_UNK); /* extern */
s32 func_0201cb50(void *);                          /* extern */

void func_02021408(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 3;
    func_02006ee8(arg0 + 0x2C, 0, 0x3480);
    M2C_FIELD(arg0, s8 *, 0x34A8) = 0x33;
    M2C_FIELD(arg0, s8 *, 0x34A9) = 1;
    M2C_FIELD(arg0, s8 *, 0x34AA) = 0;
    func_0201c9ec(func_0201cb50(arg0 + 0x1C), 0, arg0 + 0x2C, 0x3480);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
