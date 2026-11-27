#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0201b960(M2C_UNK *, s32);                  /* extern */
s32 func_0204934c(s32);                             /* extern */
M2C_UNK func_02065844(s32, s32, s32, s32, s32);     /* extern */
extern M2C_UNK data_0209e580;

s32 func_02049754(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;

    temp_r8   = func_02012a90(arg0, 1);
    temp_r5   = func_02012b7c(arg0, 2, 0);
    temp_r4   = func_02012b7c(arg0, 3, 0);
    temp_r7   = func_02012b7c(arg0, 4, 0);
    temp_r6   = func_02012b7c(arg0, 5, 0x4B);
    temp_r5_2 = func_0204934c(temp_r5);
    temp_r4_2 = func_0204934c(temp_r4);
    func_02065844(func_0201b960(&data_0209e580, temp_r8), temp_r5_2, temp_r4_2, temp_r7, temp_r6);
    return 1;
}
