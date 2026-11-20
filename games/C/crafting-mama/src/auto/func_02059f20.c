#include "m2c.h"

M2C_UNK func_020039c4(s32, M2C_UNK *);              /* extern */
s32 func_0202abc8(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0202ad9c(s32);                         /* extern */
s32 func_02031214();                                /* extern */
M2C_UNK func_02034190(s32, s32);                    /* extern */
M2C_UNK func_0205a1b4(s32, M2C_UNK, s32 *, s32);    /* extern */
extern M2C_UNK data_02086e68;

s32 func_02059f20(void *arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = func_02031214();
    func_02034190(temp_r0, M2C_FIELD(arg0, s32 *, 8));
    func_020039c4(temp_r0, &data_02086e68);
    temp_r0_2 = func_0202abc8(temp_r0, 1);
    if (temp_r0_2 == 0) {
        return 0;
    }
    sp0 = M2C_FIELD(arg0, s32 *, 4);
    func_0205a1b4(temp_r0_2, arg1, &sp0, M2C_FIELD(arg0, s32 *, 0x18));
    func_0202ad9c(temp_r0_2);
    return sp0;
}
