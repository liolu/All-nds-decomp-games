#include "m2c.h"

M2C_UNK func_02083210(M2C_UNK, s32, M2C_UNK);       /* extern */
extern M2C_UNK data_027e00b4;

void func_020142b0(void *arg0, s32 arg1) {
    M2C_FIELD(&data_027e00b4, void **, 0) = arg0;
    M2C_FIELD(&data_027e00b4, s16 *, 4)   = (s16) M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(&data_027e00b4, s16 *, 6)   = (s16) M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(&data_027e00b4, s8 *, 9)    = 0;
    M2C_FIELD(&data_027e00b4, s16 *, 0xC) = 0;
    M2C_FIELD(&data_027e00b4, s16 *, 0xE) = 0;
    M2C_FIELD(&data_027e00b4, s8 *, 0xB)  = 1;
    if (arg1 != 0) {
        func_02083210(0, 0x022E0000, 0xC000);
        M2C_FIELD(&data_027e00b4, s8 *, 0xB) = 0;
    }
    M2C_FIELD(&data_027e00b4, s8 *, 0xA)  = 0;
    M2C_FIELD(&data_027e00b4, s8 *, 0x10) = 0;
    M2C_FIELD(&data_027e00b4, s8 *, 0x11) = 0;
}
