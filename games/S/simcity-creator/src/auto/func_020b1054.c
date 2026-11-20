#include "m2c.h"

M2C_UNK func_02008380();                            /* extern */
M2C_UNK func_0200b4d0();                            /* extern */
M2C_UNK func_0200b548(M2C_UNK *);                   /* extern */
M2C_UNK func_0200b5dc(M2C_UNK *);                   /* extern */
M2C_UNK func_020b125c(void *);                      /* extern */

void func_020b1054(void *arg0) {
    u8 sp0[8];

    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    func_02008380();
    func_0200b4d0();
    func_0200b548(sp0);
    func_0200b5dc(sp0);
    func_020b125c(arg0);
}
