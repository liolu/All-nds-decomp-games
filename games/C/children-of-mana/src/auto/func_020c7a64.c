/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020114e4();                                /* extern */
M2C_UNK func_02013e98(s32, s32);                    /* extern */
M2C_UNK func_0209d444(void *);                      /* extern */

void func_020c7a64(void *arg0) {
    s32 temp_r4;

    if (M2C_FIELD(arg0, u8 *, 0x3CA) == 0) {
        return;
    }
    func_0209d444(arg0 + 0xC);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x3BC);
    if (temp_r4 != 0) {
        func_02013e98(func_020114e4(), temp_r4);
        M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
    }
    M2C_FIELD(arg0, s32 *, 8)    = -1;
    M2C_FIELD(arg0, u8 *, 0x3CA) = 0U;
}
