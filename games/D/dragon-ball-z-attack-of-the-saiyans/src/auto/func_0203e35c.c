#include "m2c.h"

void *func_0200bcbc(void *, M2C_UNK *, M2C_UNK, s32); /* extern */
void *func_02053a7c(u8);                            /* extern */
extern void *data_0209b96c;
extern M2C_UNK data_020cc620;
extern M2C_UNK func_0203dfc4;

void func_0203e35c(s8 arg0) {
    s32 var_r3;
    void *temp_r0;

    if (M2C_FIELD(func_02053a7c(M2C_FIELD(&data_020cc620, u8 *, 0xB41)), u16 *, 0x28) != 5) {
        return;
    }
    if (data_0209b96c == NULL) {
        var_r3 = 0;
    } else {
        var_r3 = M2C_FIELD(data_0209b96c, s32 *, 8);
    }
    temp_r0 = func_0200bcbc(data_0209b96c, &func_0203dfc4, 0, var_r3);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, s8 *, 0x14) = 0;
    M2C_FIELD(temp_r0, s8 *, 0x18) = arg0;
    M2C_FIELD(temp_r0, u8 *, 0x16) = (u8) M2C_FIELD(&data_020cc620, u8 *, 0xB41);
    M2C_FIELD(temp_r0, u8 *, 0x17) = (u8) M2C_FIELD(&data_020cc620, u8 *, 0xB42);
}
