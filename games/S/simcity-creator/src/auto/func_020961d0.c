#include "m2c.h"

M2C_UNK func_020b3ee4(s32, M2C_UNK);                /* extern */
M2C_UNK func_020b4218(s32, void *, s16, s16, s32, s32); /* extern */
M2C_UNK func_020b4450(s32, s16, M2C_UNK, s32, s32); /* extern */

s32 func_020961d0(void *arg0) {
    s16 temp_r1;
    s32 temp_r0;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x1A);
    if ((s32) temp_r1 < 0x100) {
        func_020b4450(M2C_FIELD(arg0, s32 *, 0x638), temp_r1, 0x48, 0x100 - temp_r1, 0x48);
        func_020b3ee4(M2C_FIELD(arg0, s32 *, 0x638), 2);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x638);
        func_020b4218(temp_r0, arg0 + 0x644, (s16) (M2C_FIELD(arg0, s16 *, 0x1A) + 0x14),
                      (s16) (M2C_FIELD(arg0, s16 *, 0x1C) + 2), 0xF, temp_r0);
        func_020b3ee4(M2C_FIELD(arg0, s32 *, 0x638), 1);
        M2C_FIELD(arg0, s32 *, 0x750) = 0;
    }
    return 1;
}
