#include "m2c.h"

M2C_UNK func_020ae68c(s32, s32);                    /* extern */
s32 func_020ae728(s32, s32);                        /* extern */
s32 func_020b32e4(void *, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_020c59e8;
extern M2C_UNK data_02163644;

void func_020b318c(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r5;
    s32 var_r4;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0xC);
    var_r4  = (s32) (temp_r2 + ((u32) (temp_r2 >> 1) >> 0x1E)) >> 2;
    temp_r1 = M2C_FIELD(arg0, s32 *, 4);
    if (var_r4 & 1) {
        var_r4 += 1;
    }
    if (temp_r1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 1;
    } else if (var_r4 <= 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x28) =
            func_020b32e4(arg0, temp_r1, M2C_FIELD(arg0, s32 *, 8), var_r4, M2C_FIELD(arg0, s32 *, 0x14),
                          M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x1C), (s32) M2C_FIELD(arg0, u8 *, 0x24));
    }
    if (M2C_FIELD(arg0, s32 *, 0x28) == 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x2C);
        if ((temp_r0 != 0) && (arg1 >= 0) && (arg1 < 3)) {
            temp_r5 = *((M2C_UNK *) ((s8 *) &data_020c59e8 + (arg1 * 4)));
            if (func_020ae728(temp_r0, temp_r5) == 0) {
                func_020ae68c(M2C_FIELD(arg0, s32 *, 0x2C), temp_r5);
            }
        }
    }
    M2C_FIELD(&data_02163644, s32 *, 4) = var_r4;
}
