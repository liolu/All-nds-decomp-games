#include "m2c.h"

M2C_UNK func_020055c4(s32, s32);                    /* extern */
s32 func_02005abc(M2C_UNK, M2C_UNK, s32);           /* extern */
M2C_UNK func_02022b48(s32, s32);                    /* extern */
M2C_UNK func_02022b5c(s32, s32, s32);               /* extern */
s32 func_020b0f4c();                                /* extern */
extern M2C_UNK data_0216351c;
extern M2C_UNK data_02163520;

s32 func_020b0cb4(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (arg1 >= (s32) M2C_FIELD(&data_0216351c, u16 *, 0x88)) {
        return 0;
    }
    temp_r0_2 = func_020b0f4c(arg0, arg1);
    temp_r0   = func_02005abc(0, -1, temp_r0_2);
    if (temp_r0 == 0) {
        return 0;
    }
    func_02022b48(arg0 + 4, *((M2C_UNK *) ((s8 *) &data_02163520 + (arg1 * 8))));
    func_02022b5c(arg0 + 4, temp_r0, temp_r0_2);
    func_020055c4(temp_r0, temp_r0_2);
    return temp_r0;
}
