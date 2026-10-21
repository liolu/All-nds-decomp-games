#include "m2c.h"

M2C_UNK func_0200673c();                            /* extern */
M2C_UNK func_0200ae54(M2C_UNK);                     /* extern */
M2C_UNK func_020cd7d0(s32);                         /* extern */
extern s8 data_0215142e;
extern M2C_UNK data_0216bc50;

s32 func_02037e7c(void) {
    func_0200673c();
    func_020cd7d0(M2C_FIELD(&data_0216bc50, s32 *, 0));
    data_0215142e                      = 0;
    M2C_FIELD(&data_0216bc50, s8 *, 9) = 0;
    func_0200ae54(-1);
    M2C_FIELD(&data_0216bc50, u8 *, 0xA) = (u8) (M2C_FIELD(&data_0216bc50, u8 *, 0xA) + 1);
    return 0;
}
