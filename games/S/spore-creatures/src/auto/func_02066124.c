#include "m2c.h"

M2C_UNK func_0206644c(void *, M2C_UNK, M2C_UNK);                      /* extern */
s32 func_020886e8(void *);                          /* extern */
M2C_UNK func_02088894(void *, M2C_UNK);             /* extern */

void func_02066124(void *arg0, void *arg1, void *arg2) {
    void *temp_r3;
    void *temp_r3_2;
    void *var_r0;
    void *var_r0_2;
    void *var_r3;

    if (M2C_FIELD(arg0, u8 *, 0x5D) != 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x5F) != 0) {
        var_r3 = M2C_FIELD(arg0, void **, 0x50);
        var_r0 = var_r3;
        if (var_r3 != NULL) {
            var_r0 = var_r3 - 4;
        }
        if (var_r0 != NULL) {
            if (var_r3 != NULL) {
                var_r3 -= 4;
            }
            temp_r3                      = M2C_FIELD(var_r3, void **, 0x20);
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(temp_r3, s32 *, 0x14);
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(temp_r3, s32 *, 0x18);
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(temp_r3, s32 *, 0x1C);
            var_r0_2                     = M2C_FIELD(arg0, void **, 0x50);
            if (var_r0_2 != NULL) {
                var_r0_2 -= 4;
            }
            temp_r3_2                    = M2C_FIELD(var_r0_2, void **, 0x20);
            M2C_FIELD(arg0, s16 *, 0x14) = (s16) M2C_FIELD(temp_r3_2, s16 *, 0xC);
            M2C_FIELD(arg0, s16 *, 0x16) = (s16) M2C_FIELD(temp_r3_2, s16 *, 0xE);
            M2C_FIELD(arg0, s16 *, 0x18) = (s16) M2C_FIELD(temp_r3_2, s16 *, 0x10);
            goto block_14;
        }
        M2C_FIELD(arg0, u8 *, 0x5D) = 1U;
        if (M2C_FIELD(arg0, u8 *, 0x61) != 0) {
            M2C_FIELD(arg0, u8 *, 0x5F) = 0U;
            return;
        }
        func_02088894(arg0, 0);
        return;
    }
block_14:
    func_0206644c(arg0, arg1, arg2);
    if ((func_020886e8(arg0) == 0) && (M2C_FIELD(arg0, u8 *, 0x5C) == 0)) {
        M2C_FIELD(arg0, u8 *, 0x5D) = 1U;
    }
}
