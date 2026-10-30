#include "m2c.h"

s32 func_0205369c();                                /* extern */
M2C_UNK func_0206fff0(s32);                         /* extern */
M2C_UNK func_020ae770(s32, s32);                    /* extern */
s32 func_020ae7bc(s32, s32);                        /* extern */

void func_02056380(void *arg0, s8 arg1, s16 arg2) {
    M2C_FIELD(arg0, s8 *, 0x18)  = 0;
    M2C_FIELD(arg0, s16 *, 4)    = arg2;
    M2C_FIELD(arg0, s8 *, 0)     = 0;
    M2C_FIELD(arg0, s8 *, 1)     = 0;
    M2C_FIELD(arg0, s8 *, 0x10)  = arg1;
    M2C_FIELD(arg0, s32 *, 0xC)  = 1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    func_0206fff0(M2C_FIELD(arg0, s32 *, 8));
    if (func_020ae7bc(func_0205369c(), 0x3003) == 0) {
        func_0206fff0(M2C_FIELD(arg0, s32 *, 8));
        func_020ae770(func_0205369c(), 0x3003);
    }
    M2C_FIELD(arg0, s16 *, 0x1A) = 0x80;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0x80;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
}
