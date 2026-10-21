#include "m2c.h"

s32 func_02059794();                                /* extern */
extern M2C_UNK data_0217296c;

void func_020a433c(void *arg0) {
    if (M2C_FIELD(&data_0217296c, s32 *, 0xE84) != 0) {
        if (func_02059794() != 1) {
            return;
        }
        M2C_FIELD(&data_0217296c, s32 *, 0xE84) = 0;
        M2C_FIELD(arg0, u8 *, 0x77B)            = (u8) (M2C_FIELD(arg0, u8 *, 0x77B) + 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x77B) = (u8) (M2C_FIELD(arg0, u8 *, 0x77B) + 1);
}
