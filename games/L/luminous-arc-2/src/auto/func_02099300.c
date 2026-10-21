#include "m2c.h"

M2C_UNK func_02018e6c(s32, s32, s32);               /* extern */
u32 func_0209922c(s32, u32, s32, u32);              /* extern */
extern M2C_UNK data_02147904;

u32 func_02099300(s32 arg0, u32 arg1) {
    s32 temp_r0_2;
    u32 temp_r0;
    u32 temp_r1;
    u32 temp_r4;
    void *temp_r5;

    temp_r5 = M2C_FIELD(M2C_FIELD(&data_02147904, void **, 4), void **, 0xA4);
    if (temp_r5 != NULL) {
        temp_r4 = M2C_FIELD(temp_r5, u32 *, 0x60);
        if (temp_r4 != 0) {
            temp_r0 = func_0209922c(M2C_FIELD(temp_r5, s32 *, 0x5C), temp_r4, arg0, arg1);
            temp_r1 = M2C_FIELD(temp_r5, u32 *, 0x60);
            if (temp_r0 < temp_r1) {
                temp_r0_2 = M2C_FIELD(temp_r5, s32 *, 0x5C);
                func_02018e6c(temp_r0_2, temp_r0_2 + temp_r0, temp_r1 - temp_r0);
                M2C_FIELD(temp_r5, u32 *, 0x60) = (u32) (M2C_FIELD(temp_r5, u32 *, 0x60) - temp_r0);
                return 0U;
            }
            M2C_FIELD(temp_r5, u32 *, 0x60) = 0U;
            return temp_r0 - temp_r1;
        }
        return func_0209922c(arg0, arg1, 0, 0U);
    }
    return 0U;
}
