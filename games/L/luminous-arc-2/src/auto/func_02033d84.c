#include "m2c.h"

M2C_UNK func_020cf150(M2C_UNK, M2C_UNK, u8);        /* extern */
M2C_UNK func_020cf2a0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_02181a4c;

void func_02033d84(s32 arg0) {
    if (arg0 == 0) {
        func_020cf150(0x4E, 1, M2C_FIELD(&data_02181a4c, u8 *, 0x274));
        return;
    }
    func_020cf2a0(0x4E, 0, 0x10, 0x60, 0, 0x28, 6, 0x160000, 0x118, (s32) M2C_FIELD(&data_02181a4c, u8 *, 0x274));
}
