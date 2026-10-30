#include "m2c.h"

s32 func_0201a018(s32, s32);                        /* extern */
M2C_UNK func_02059a34(u16 *, u32, s32);             /* extern */
s32 func_020705d4(s32, M2C_UNK, M2C_UNK);           /* extern */
u32 func_02070b84(s32, M2C_UNK, M2C_UNK);           /* extern */
u16 func_02070bf0(s32);                             /* extern */
s32 func_02070c18(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_02070c40(s32, M2C_UNK, M2C_UNK);           /* extern */
extern M2C_UNK data_020c2576;

u16 func_02063a60(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 sp0;
    u32 temp_r0;

    sp0 = func_02070bf0(M2C_FIELD(arg0, s32 *, 8));
    if (func_020705d4(M2C_FIELD(arg0, s32 *, 8), arg1, arg2) == 4) {
        temp_r0 = func_02070b84(M2C_FIELD(arg0, s32 *, 8), arg1, arg2);
        if ((temp_r0 >= 1U) && (temp_r0 <= 9U)) {
            func_02059a34(&sp0, temp_r0, func_02070c18(M2C_FIELD(arg0, s32 *, 8), arg1, arg2));
        } else if (temp_r0 == 0xC) {
            sp0 = ((u16 *) &data_020c2576)[func_0201a018(func_02070c40(M2C_FIELD(arg0, s32 *, 8), arg1, arg2), 0x2AF8)];
        }
    }
    return sp0;
}
