#include "m2c.h"

M2C_UNK func_020994a8();                            /* extern */

void func_020993cc(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x78) = arg1;
    M2C_FIELD(arg0, s32 *, 0x7C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x80) = (s32) M2C_FIELD(arg0, s32 *, 0x78);
    M2C_FIELD(arg0, s32 *, 0x84) = (s32) M2C_FIELD(arg0, s32 *, 0x7C);
    func_020994a8();
}
