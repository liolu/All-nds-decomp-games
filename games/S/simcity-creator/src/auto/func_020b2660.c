#include "m2c.h"

M2C_UNK func_02006e64(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_020b26a0(s32);                         /* extern */
M2C_UNK func_020b2704(s32);                         /* extern */
M2C_UNK func_020b2730();                            /* extern */
M2C_UNK func_020b27dc(s32);                         /* extern */
M2C_UNK func_020b2b60(s32);                         /* extern */

void func_020b2660(s32 arg0) {
    func_020b2730();
    func_020b27dc(arg0);
    func_020b2704(arg0);
    func_020b26a0(arg0);
    func_020b2b60(arg0);
    func_02006e64(0, arg0 + 0x40, 0xE00);
}
