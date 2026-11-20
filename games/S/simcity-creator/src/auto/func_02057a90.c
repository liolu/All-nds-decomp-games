#include "m2c.h"

s32 func_020197c4(s32);                             /* extern */
M2C_UNK func_02057af8(M2C_UNK, s32, s32, s16 *, s16 *); /* extern */

void func_02057a90(M2C_UNK arg0, void *arg1) {
    s16 sp6;
    s16 sp4;
    s32 temp_r5;

    temp_r5 = func_020197c4(M2C_FIELD(arg1, s32 *, 8));
    func_02057af8(arg0, temp_r5, func_020197c4(M2C_FIELD(arg1, s32 *, 0xC)), &sp6, &sp4);
    M2C_FIELD(arg1, s16 *, 4) = (s16) (sp6 + M2C_FIELD(arg1, u16 *, 0));
    M2C_FIELD(arg1, s16 *, 6) = (s16) (sp4 + M2C_FIELD(arg1, u16 *, 2));
}
