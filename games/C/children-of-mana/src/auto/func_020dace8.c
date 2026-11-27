/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020116b8(M2C_UNK);                         /* extern */
s32 func_02011c38();                                /* extern */
s32 func_02011ef8(s32, M2C_UNK);                    /* extern */
M2C_UNK func_020dae30(void *, u8);                  /* extern */

void func_020dace8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x4D) != 0) {
        func_020dae30(arg0, M2C_FIELD(arg0, u8 *, 0x1C));
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x4C) != 0) {
        return;
    }
    if (func_02011ef8(func_02011c38(), 2) != 0) {
        M2C_FIELD(arg0, s32 *, 4)    = 4;
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        return;
    }
    if (func_02011ef8(func_020116b8(0), 8) != 0) {
        M2C_FIELD(arg0, u8 *, 0x4C) = 1U;
    }
}
