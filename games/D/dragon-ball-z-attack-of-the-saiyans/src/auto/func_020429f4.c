#include "m2c.h"

void *func_0200bcbc(void *, M2C_UNK *, M2C_UNK, s32); /* extern */
M2C_UNK func_0202bed8(void *, s32, M2C_UNK, void *, void *); /* extern */
void *func_02053a7c(s8);                            /* extern */
extern void *data_0209b96c;
extern M2C_UNK func_02042238;

void func_020429f4(s8 arg0, s8 arg1, s8 arg2, s8 arg3, s32 arg4) {
    s32 temp_r2;
    s32 var_r3;
    void *temp_r0;
    void *temp_r5;
    void *temp_r6;

    if (data_0209b96c == NULL) {
        var_r3 = 0;
    } else {
        var_r3 = M2C_FIELD(data_0209b96c, s32 *, 8);
    }
    temp_r0 = func_0200bcbc(data_0209b96c, &func_02042238, 0, var_r3);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, s8 *, 0x14) = 0;
    M2C_FIELD(temp_r0, s8 *, 0x15) = arg0;
    M2C_FIELD(temp_r0, s8 *, 0x18) = arg2;
    M2C_FIELD(temp_r0, s8 *, 0x19) = arg3;
    M2C_FIELD(temp_r0, s8 *, 0x1A) = arg1;
    M2C_FIELD(temp_r0, s8 *, 0x25) = (s8) arg4;
    temp_r5                        = func_02053a7c(arg2);
    temp_r6                        = func_02053a7c(arg3);
    func_0202bed8(temp_r5 + 0x38, arg1 + 3, 0xF, temp_r0 + 0x3C, temp_r0 + 0x40);
    temp_r2 = M2C_FIELD(temp_r0, s32 *, 0x3C);
    if ((temp_r2 == 0) && (M2C_FIELD(temp_r0, s32 *, 0x40) == 0)) {
        M2C_FIELD(temp_r0, s32 *, 0x44) = 0;
        M2C_FIELD(temp_r0, s32 *, 0x48) = 0;
        return;
    }
    if (arg3 == 0xF0) {
        M2C_FIELD(temp_r0, s32 *, 0x44) = (s32) ((0x98 - temp_r2) - M2C_FIELD(temp_r5, s16 *, 8));
        M2C_FIELD(temp_r0, s32 *, 0x48) = (s32) ((0x68 - M2C_FIELD(temp_r0, s32 *, 0x40)) - M2C_FIELD(temp_r5, s16 *, 0xA));
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 0x44) = (s32) ((M2C_FIELD(temp_r6, s16 *, 8) - temp_r2) - M2C_FIELD(temp_r5, s16 *, 8));
    M2C_FIELD(temp_r0, s32 *, 0x48) =
        (s32) ((M2C_FIELD(temp_r6, s16 *, 0xA) - M2C_FIELD(temp_r0, s32 *, 0x40)) - M2C_FIELD(temp_r5, s16 *, 0xA));
}
