#include "m2c.h"

M2C_UNK func_020ca33c(void *, M2C_UNK);             /* extern */

void func_020cadbc(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) (M2C_FIELD(arg0, s32 *, 0xC) | 4);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s16 *, 0x32) = 0;
    M2C_FIELD(arg0, s16 *, 0x30) = arg1;
    func_020ca33c(arg0, 2);
}
