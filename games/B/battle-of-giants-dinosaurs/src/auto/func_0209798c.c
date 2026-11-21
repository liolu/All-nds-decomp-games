#include "m2c.h"

M2C_UNK func_020979e4(s32, M2C_UNK *, s32);         /* extern */
extern M2C_UNK data_020bef14;
extern M2C_UNK data_020c02e8;
extern M2C_UNK data_020c02f0;
extern M2C_UNK data_020c02f8;

void func_0209798c(s32 arg0) {
    func_020979e4(arg0 + 0x60, &data_020c02e8, M2C_FIELD(&data_020bef14, s32 *, 0xD8));
    func_020979e4(arg0 + 0x174, &data_020c02f0, M2C_FIELD(&data_020bef14, s32 *, 0xDC));
    func_020979e4(arg0 + 0x288, &data_020c02f8, M2C_FIELD(&data_020bef14, s32 *, 0xE0));
}
