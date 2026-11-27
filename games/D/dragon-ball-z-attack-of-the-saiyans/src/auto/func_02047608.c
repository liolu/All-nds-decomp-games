#include "m2c.h"

s32 func_02012a90(void *, M2C_UNK);                 /* extern */
s32 func_02012b7c(void *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_0202c0f8(M2C_UNK *, s32, M2C_UNK);     /* extern */
void *func_02035510(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_0209f7a8;
extern M2C_UNK func_020471cc;

s32 func_02047608(void *arg0) {
    s32 sp0;
    s16 temp_r6;
    s16 temp_r7;
    s16 temp_r8;
    s16 temp_r9;
    s32 temp_r11;
    s32 temp_r4;
    s32 temp_r5;
    void *temp_r0;

    temp_r5  = func_02012a90(arg0, 1);
    temp_r4  = func_02012a90(arg0, 2);
    temp_r6  = (s16) func_02012a90(arg0, 3);
    temp_r7  = (s16) func_02012a90(arg0, 4);
    temp_r8  = (s16) func_02012a90(arg0, 5);
    temp_r9  = (s16) func_02012a90(arg0, 6);
    temp_r11 = func_02012a90(arg0, 7);
    sp0      = func_02012b7c(arg0, 8, 0);
    func_0202c0f8(&data_0209f7a8, temp_r5, 0);
    temp_r0                         = func_02035510(3, 0, &func_020471cc, 0);
    M2C_FIELD(temp_r0, s8 *, 0x15)  = 3;
    M2C_FIELD(temp_r0, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(temp_r0, s32 *, 0x20) = temp_r4;
    M2C_FIELD(temp_r0, s32 *, 0x24) = temp_r5;
    M2C_FIELD(temp_r0, s32 *, 0x28) = sp0;
    M2C_FIELD(temp_r0, s32 *, 0x2C) = temp_r11;
    M2C_FIELD(temp_r0, s32 *, 0x30) = (s32) temp_r9;
    M2C_FIELD(temp_r0, s32 *, 0x34) = (s32) temp_r6;
    M2C_FIELD(temp_r0, s32 *, 0x38) = (s32) temp_r7;
    M2C_FIELD(temp_r0, s32 *, 0x3C) = (s32) temp_r8;
    return 1;
}
