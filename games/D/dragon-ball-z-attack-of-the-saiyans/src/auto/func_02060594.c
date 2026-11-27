#include "m2c.h"

M2C_UNK func_02037150();                            /* extern */
extern M2C_UNK data_020cc620;

void func_02060594(void) {
    M2C_FIELD(&data_020cc620, s32 *, 0xAC) = 0;
    M2C_FIELD(&data_020cc620, s32 *, 0xB0) = 0;
    M2C_FIELD(&data_020cc620, s8 *, 0xB4)  = 0;
    M2C_FIELD(&data_020cc620, s8 *, 0xB5)  = 0;
    M2C_FIELD(&data_020cc620, s16 *, 0xB6) = 0x100;
    if (M2C_FIELD(&data_020cc620, s32 *, 0xB8) == 0) {
        return;
    }
    func_02037150();
    M2C_FIELD(&data_020cc620, s32 *, 0xB8) = 0;
}
