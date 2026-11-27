#include "m2c.h"

M2C_UNK func_0200134c(s32, s32);                    /* extern */
M2C_UNK func_020019b8(s32, M2C_UNK);                /* extern */
M2C_UNK func_02001d20(s32, s32);                    /* extern */
M2C_UNK func_02001e64(s32, s32);                    /* extern */
s32 func_02001ee0();                                /* extern */
s32 func_02001f1c(s32, s32);                        /* extern */
extern s32 data_020e0ba0;

void func_02001c04(s32 arg0, s32 arg1) {
    s32 temp_r4;

    func_02001e64(arg0, func_02001ee0());
    func_020019b8((arg1 * 0x14) + arg0, 1);
    temp_r4 = data_020e0ba0;
    func_0200134c(temp_r4 + 0x54C, func_02001f1c(arg0, arg1));
    func_02001d20(arg0, arg1);
}
