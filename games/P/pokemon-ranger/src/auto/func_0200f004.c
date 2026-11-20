#include "m2c.h"

M2C_UNK func_02005530(void *);                      /* extern */
M2C_UNK func_0201014c(void *);                      /* extern */
M2C_UNK func_020127d0(void *, M2C_UNK);             /* extern */

void func_0200f004(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x5F0) = 0x39;
    M2C_FIELD(arg0, s16 *, 0x60A) = 0;
    func_020127d0(arg0, 1);
    func_0201014c(arg0);
    M2C_FIELD(arg0, s8 *, 0x601) = 0;
    func_02005530(arg0);
    M2C_FIELD(arg0, s8 *, 0x600)  = 1;
    M2C_FIELD(arg0, s32 *, 0x734) = 0x2800;
    M2C_FIELD(arg0, s8 *, 0x702)  = 0x1E;
    M2C_FIELD(arg0, s8 *, 0x41F)  = 0;
}
