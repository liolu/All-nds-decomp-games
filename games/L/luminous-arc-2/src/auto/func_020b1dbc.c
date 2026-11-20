#include "m2c.h"

M2C_UNK func_020b05f4(void **, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020b92cc(void **, s32, s32 *);             /* extern */
M2C_UNK func_020b94e0(void **, s32, M2C_UNK *);     /* extern */
extern M2C_UNK data_0212e23c;

s32 func_020b1dbc(void **arg0) {
    s32 sp0;
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *arg0;
    temp_r0 = func_020b92cc(arg0, M2C_FIELD(temp_r4, s32 *, 0x1F0), &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (sp0 == 4) {
        func_020b94e0(arg0, 0x107, &data_0212e23c);
        func_020b05f4(arg0, 4, 1);
        return 4;
    }
    if (sp0 == 0) {
        return 0;
    }
    M2C_FIELD(temp_r4, s32 *, 0x1F4) = 2;
    return 0;
}
