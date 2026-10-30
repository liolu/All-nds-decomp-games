#include "m2c.h"

s32 func_02018cb4(s32, s32);                        /* extern */
s32 func_02019388(s32, s32);                        /* extern */
s32 func_020198b0();                                /* extern */
s32 func_020198f8();                                /* extern */
s32 func_020199ac(s32, s32);                        /* extern */
M2C_UNK func_02079a0c(s32, M2C_UNK);                /* extern */
M2C_UNK func_02079a60(s32);                         /* extern */
M2C_UNK func_02079a6c(s32);                         /* extern */
M2C_UNK func_02079a78(s32);                         /* extern */

void func_0207683c(void **arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;

    temp_r0 = M2C_FIELD(*arg0, s32(**)(), 0x1C)(arg0);
    func_02079a0c(temp_r0, 0);
    temp_r8 = func_020198b0();
    func_02079a0c(temp_r0, 1);
    temp_r4 = func_020198b0();
    func_02079a0c(temp_r0, 2);
    temp_r7 = func_020198b0();
    func_02079a60(temp_r0);
    temp_r6 = func_020198f8();
    func_02079a6c(temp_r0);
    temp_r5 = func_020198f8();
    func_02079a78(temp_r0);
    temp_r4_2 = func_020198f8();
    func_02018cb4(
        0x3F000000,
        func_02019388(
            func_020199ac(
                0x42C80000,
                func_02018cb4(
                    temp_r4_2,
                    func_02018cb4(temp_r5, func_02018cb4(temp_r6, func_02018cb4(temp_r7, func_02018cb4(temp_r8, temp_r4)))))),
            0x46800000));
}
