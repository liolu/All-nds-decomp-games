#include "m2c.h"

M2C_UNK func_02003e90();                            /* extern */
M2C_UNK func_0200402c();                            /* extern */
M2C_UNK func_02024934(s32, s32);                    /* extern */
M2C_UNK func_020cf6b4(M2C_UNK, s32 *);              /* extern */
M2C_UNK func_020cf720(s32);                         /* extern */

void func_02032224(M2C_UNK arg0, s32 arg1) {
    s32 sp0;

    func_020cf6b4(arg0, &sp0);
    func_02003e90();
    func_02024934(sp0, (arg1 << 5) + 0x06820000);
    func_0200402c();
    func_020cf720(sp0);
}
