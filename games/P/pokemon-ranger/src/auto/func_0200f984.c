#include "m2c.h"

M2C_UNK func_0201014c(void *);                      /* extern */
M2C_UNK func_020127d0(void *, M2C_UNK);             /* extern */

void func_0200f984(void *arg0) {
    M2C_FIELD(arg0, volatile s32 *, 0x5F0) = 0x17;
    M2C_FIELD(arg0, volatile s16 *, 0x60A) = 0;
    func_020127d0(arg0, 0x10);
    func_0201014c(arg0);
    M2C_FIELD(arg0, volatile s8 *, 0x601)  = 0;
    M2C_FIELD(arg0, volatile s8 *, 0x616)  = 1;
    M2C_FIELD(arg0, volatile s32 *, 0x628) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x624) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x628);
    M2C_FIELD(arg0, volatile s32 *, 0x620) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x624);
    M2C_FIELD(arg0, volatile s32 *, 0x61C) = 0;
}
