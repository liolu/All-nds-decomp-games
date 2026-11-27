/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ce400(void *, s32);                 /* extern */

void func_020ce4c8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r2;

    if (arg2 == 0) {
        temp_r2 = M2C_FIELD(arg0, s32 *, 0x80);
        if (temp_r2 > arg1) {
            M2C_FIELD(arg0, s32 *, 0x8C) = 1;
        } else if (temp_r2 < arg1) {
            M2C_FIELD(arg0, s32 *, 0x8C) = -1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x8C) = 0;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x8C) = arg2;
    }
    M2C_FIELD(arg0, s32 *, 0x80) = arg1;
    M2C_FIELD(arg0, s32 *, 0x84) = arg1;
    func_020ce400(arg0, M2C_FIELD(arg0, s32 *, 0x80));
}
