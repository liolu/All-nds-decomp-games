#include "m2c.h"

void *func_02066ea4(s32, s32);                      /* extern */
extern s32 data_020f46b0;

void func_02067c20(void *arg0, void *arg1) {
    void *temp_r0;

    temp_r0 = func_02066ea4(data_020f46b0, M2C_FIELD(arg0, s32 *, 4));
    if (temp_r0 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r0, u8 *, 0x35) != 2) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 0x50) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(temp_r0, s32 *, 0x54) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(temp_r0, s32 *, 0x58) = (s32) M2C_FIELD(arg1, s32 *, 8);
}
