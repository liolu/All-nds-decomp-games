/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02033858(void *, M2C_UNK);                 /* extern */
M2C_UNK func_02033930(void *, M2C_UNK);             /* extern */

void func_020337d8(void *arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    if ((temp_r0 != 9) && (temp_r0 != 0xA) && (temp_r0 != 0xB)) {
        return;
    }
    if (arg1 != 0) {
        if (func_02033858(arg0, arg2) == 0) {
            return;
        }
        func_02033930(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x2C) = 1;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x34) = 1;
    M2C_FIELD(arg0, s8 *, 0x35) = 0;
    M2C_FIELD(arg0, s8 *, 0x36) = 0;
}
