#include "m2c.h"

void *func_0200bcbc(void *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02085398();                            /* extern */
extern s32 data_020d1d24;

void *func_02035510(s8 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 var_r4;
    void *temp_r0;
    void *temp_r0_2;

    temp_r0_2 = data_020d1d24 + 0x23B4;
    if (temp_r0_2 == NULL) {
        var_r4 = 0;
    } else {
        var_r4 = M2C_FIELD(temp_r0_2, s32 *, 8);
    }
    temp_r0 = func_0200bcbc(temp_r0_2, arg2, arg3, var_r4);
    if (temp_r0 == NULL) {
        func_02085398();
    }
    M2C_FIELD(temp_r0, s8 *, 0x14)  = arg0;
    M2C_FIELD(temp_r0, s32 *, 0x18) = arg1;
    return temp_r0;
}
