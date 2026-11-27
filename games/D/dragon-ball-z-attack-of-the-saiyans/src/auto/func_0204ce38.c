#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0204c7b8(s32, M2C_UNK, s32, s32, s32); /* extern */
extern void *data_020d1d24;

s32 func_0204ce38(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;

    if ((data_020d1d24 != NULL) && (M2C_FIELD(data_020d1d24, u8 *, 6) != 0)) {
        return 1;
    }
    temp_r8 = func_02012a90(arg0, 1);
    temp_r7 = func_02012a90(arg0, 2);
    temp_r6 = func_02012a90(arg0, 3);
    temp_r5 = func_02012b7c(arg0, 4, 0);
    temp_r0 = func_02012b7c(arg0, 5, 0);
    func_0204c7b8(temp_r8, 0xC, temp_r7 * 0x10, temp_r5, temp_r0);
    func_0204c7b8(temp_r8, 0xD, temp_r6 * 0x10, temp_r5, temp_r0);
    return 1;
}
