#include "m2c.h"

M2C_UNK func_0201014c(void *);                      /* extern */
M2C_UNK func_020127d0(void *, M2C_UNK);             /* extern */

void func_0201001c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x5F0) = 5;
    M2C_FIELD(arg0, s16 *, 0x60A) = 0;
    func_020127d0(arg0, 3);
    func_0201014c(arg0);
    M2C_FIELD(arg0, s8 *, 0x601)  = 1;
    M2C_FIELD(arg0, s8 *, 0x600)  = 1;
    M2C_FIELD(arg0, s32 *, 0x3D0) = (s32) M2C_FIELD(arg0, s32 *, 0x64C);
}
