#include "m2c.h"

s32 func_02035c0c();                                /* extern */
extern M2C_UNK data_02172940;

void func_020a37e0(void) {
    if (func_02035c0c() == 0) {
        return;
    }
    M2C_FIELD(&data_02172940, u8 *, 0x16) = (u8) (M2C_FIELD(&data_02172940, u8 *, 0x16) + 1);
}
