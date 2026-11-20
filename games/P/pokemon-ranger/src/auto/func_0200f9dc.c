#include "m2c.h"

M2C_UNK func_02005530(void *, M2C_UNK);             /* extern */
M2C_UNK func_0201014c(void *);                      /* extern */
M2C_UNK func_020127d0(void *, M2C_UNK);             /* extern */
M2C_UNK func_020140ac(void *, s32);                 /* extern */
s32 func_020c1978(void *);                          /* extern */
s32 func_020c1b28(s32, s32);                        /* extern */

void func_0200f9dc(void *arg0, void *arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x5F0) = 0x2E;
    M2C_FIELD(arg0, s16 *, 0x60A) = 0;
    func_020127d0(arg0, 5);
    func_0201014c(arg0);
    M2C_FIELD(arg0, s8 *, 0x601)  = 0;
    M2C_FIELD(arg0, s32 *, 0x620) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x624) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x628) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x61C) = arg2;
    if (func_020c1978(arg1) > 0) {
        func_020140ac(arg0, func_020c1b28(M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 8)));
    }
    func_02005530(arg0, 0);
    M2C_FIELD(arg0, s8 *, 0x616) = 1;
}
