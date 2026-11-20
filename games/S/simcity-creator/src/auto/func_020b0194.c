#include "m2c.h"

M2C_UNK func_020afed8(void *, void *, void *);      /* extern */

void func_020b0194(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xE4)  = 0;
    M2C_FIELD(arg0, s32 *, 0xE8)  = 0;
    M2C_FIELD(arg0, s32 *, 0xEC)  = 0;
    M2C_FIELD(arg0, s32 *, 0xF0)  = 0;
    M2C_FIELD(arg0, s32 *, 0x184) = 0;
    func_020afed8(arg0, arg0 + 4, arg0 + 0x9C);
}
