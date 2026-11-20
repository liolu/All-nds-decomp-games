#include "m2c.h"

s32 func_020738c8(s32);                             /* extern */
s8 func_020738d4(s32);                              /* extern */

void func_02020cf4(void *arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s8 *, 0x342BC)  = func_020738d4(M2C_FIELD(arg0, s32 *, 0x34E8));
    M2C_FIELD(arg2, s32 *, 0x342C0) = func_020738c8(M2C_FIELD(arg0, s32 *, 0x34E8));
}
