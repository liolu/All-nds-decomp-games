#include "m2c.h"

M2C_UNK func_02019388(s32, s32);                    /* extern */
s32 func_020198b0();                                /* extern */
s32 func_020199ac(s32, s32);                        /* extern */
M2C_UNK func_0207d2f4();                            /* extern */

void func_02076a30(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK(**)(), 0x24)(arg0);
    func_0207d2f4();
    func_02019388(func_020199ac(0x42C80000, func_020198b0()), 0x43800000);
}
