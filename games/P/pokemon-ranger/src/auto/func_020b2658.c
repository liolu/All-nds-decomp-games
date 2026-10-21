#include "m2c.h"

void **func_020b26b0(M2C_UNK, s32, M2C_UNK, s32);   /* extern */
extern s32 data_020f1864;

void func_020b2658(M2C_UNK arg0, s32 arg1) {
    void **temp_r0;

    if (arg1 == 0) {
        return;
    }
    temp_r0 = func_020b26b0(arg0, arg1, 0, data_020f1864 + 4);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, s32), 0x38)(temp_r0, arg1);
}
