#include "m2c.h"

M2C_UNK func_0203acd4(void *, s32, s32, M2C_UNK, s32, s32, s32); /* extern */
s32 func_02091a38(s32);                             /* extern */
s32 func_02091a40(s32);                             /* extern */

void func_0203b2a4(void *arg0) {
    s32 temp_r5;

    temp_r5 = func_02091a38(M2C_FIELD(arg0, s32 *, 0x269C4));
    func_0203acd4(arg0, temp_r5, func_02091a40(M2C_FIELD(arg0, s32 *, 0x269C4)), 0x127, 0xA0, 8, 0x12);
    M2C_FIELD(arg0, s32 *, 0x4C) = 1;
}
