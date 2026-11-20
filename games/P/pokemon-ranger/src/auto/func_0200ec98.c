#include "m2c.h"

M2C_UNK func_02005530(void *);                      /* extern */
M2C_UNK func_0201014c(void *);                      /* extern */
M2C_UNK func_020127d0(void *, M2C_UNK);             /* extern */
M2C_UNK func_020140ac(void *, s32);                 /* extern */

void func_0200ec98(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x5F0) = 0xF;
    M2C_FIELD(arg0, s16 *, 0x60A) = 0;
    func_020127d0(arg0, 7);
    func_0201014c(arg0);
    M2C_FIELD(arg0, s8 *, 0x601) = 0;
    func_02005530(arg0);
    M2C_FIELD(arg0, s8 *, 0x600)  = 0;
    M2C_FIELD(arg0, s32 *, 0x65C) = 0;
    func_020140ac(arg0, 0x3244);
}
