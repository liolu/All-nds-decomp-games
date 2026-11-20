#include "m2c.h"

s32 func_020af5c4(M2C_UNK *, M2C_UNK *, u32, s32);  /* extern */
extern M2C_UNK data_020f187c;
extern M2C_UNK data_020f1880;

s32 func_020afb78(s32 arg0) {
    if (func_020af5c4(&data_020f187c, &data_020f1880, (u32) (arg0 << 0x10) >> 0xD, ((u32) (arg0 & ~0xFFFF) >> 0x10) * 8) ==
        0) {
        return 1;
    }
    return 0;
}
