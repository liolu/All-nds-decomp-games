#include "m2c.h"

s32 func_02018ef8(void *, M2C_UNK *, M2C_UNK);      /* extern */
s32 func_020a6ef8(M2C_UNK, s32, u16);               /* extern */
s32 func_020a6fd0();                                /* extern */
M2C_UNK func_020a7c20(M2C_UNK, s32);                /* extern */
s32 func_020a89c8(u8);                              /* extern */
s32 func_020a89f4(void *, s32);                     /* extern */
s32 func_020a8a78(M2C_UNK, void *, s32);            /* extern */
M2C_UNK func_020a8b50(M2C_UNK, u8 *, s32, s32 *, u16 *); /* extern */
s32 func_020a8bc0(M2C_UNK, s32, u8 *, s32, s32);    /* extern */
extern M2C_UNK data_0212d980;

s32 func_020a8e98(M2C_UNK arg0, u8 *arg1, s32 arg2) {
    s32 sp8;
    u16 sp4;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r7;
    u8 temp_r8;

    if (arg2 < 1) {
        return 0;
    }
    temp_r8 = *arg1;
    temp_r0 = func_020a89c8(temp_r8);
    if (arg2 < temp_r0) {
        return 0;
    }
    if ((temp_r8 & 0x40) && (func_020a8a78(arg0, arg1 + temp_r0, arg2 - temp_r0) == 0)) {
        return 0;
    }
    if ((temp_r8 & 0x80) && (func_020a89f4(arg1 + temp_r0, arg2 - temp_r0) == 0)) {
        return 0;
    }
    if (func_02018ef8(arg1 + 1, &data_0212d980, 4) == 0) {
        return -1;
    }
    func_020a8b50(arg0, arg1, arg2, &sp8, &sp4);
    temp_r7 = func_020a6ef8(arg0, sp8, sp4);
    if (func_020a6fd0() != 0) {
        return -2;
    }
    temp_r4 = func_020a8bc0(arg0, temp_r7, arg1, arg2, 1);
    func_020a7c20(arg0, temp_r7);
    return temp_r4;
}
