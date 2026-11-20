#include "m2c.h"

M2C_UNK func_0202142c(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0203526c(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020352c4(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_02035bd0();                            /* extern */
M2C_UNK func_02035c18(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_02035c84();                            /* extern */
M2C_UNK func_02035d84();                            /* extern */
M2C_UNK func_02035d9c(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_02035e00();                            /* extern */
M2C_UNK func_02036028();                            /* extern */
M2C_UNK func_0203605c(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020360c8();                            /* extern */
M2C_UNK func_02037748(s32, s32);                    /* extern */

void func_0202168c(void *arg0, M2C_UNK arg1, s32 arg2, void *arg3) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_r5 = M2C_FIELD(arg0, s32 *, 8);
    func_02037748(temp_r4, temp_r5);
    switch (arg2) {                                 /* irregular */
        case 1:
            if (M2C_FIELD(arg0, s32 *, 4) != 0) {
                func_02035bd0();
                func_02035c18(temp_r4, arg1, temp_r5);
                func_02035c84();
            } else {
                func_0203526c(temp_r4, arg1, temp_r5);
            }
            break;
        case 2:
            if (M2C_FIELD(arg0, s32 *, 4) != 0) {
                func_02035d84();
                func_02035d9c(temp_r4, arg1, temp_r5);
                func_02035e00();
            } else {
                func_020352c4(temp_r4, arg1, temp_r5);
            }
            break;
        case 0:
            func_02036028();
            func_0203605c(temp_r4, arg1, temp_r5);
            func_020360c8();
            break;
    }
    M2C_FIELD(arg3, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg3, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    func_0202142c(arg3, arg2, arg1);
}
