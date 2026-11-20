#include "m2c.h"

M2C_UNK func_02033d24();                            /* extern */
M2C_UNK func_020cf2a0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_02181a4c;

void func_02033c7c(void) {
    if (M2C_FIELD(&data_02181a4c, u8 *, 0x266) == 4) {
        func_020cf2a0(0x1D, 0, 0, 0, 0, 1, 6, 0x160002, 0x118, (s32) M2C_FIELD(&data_02181a4c, u8 *, 0x274));
    } else {
        func_020cf2a0(0x1D, 0, 0, 0, 0, 1, 6, 0x160001, 0x118, (s32) M2C_FIELD(&data_02181a4c, u8 *, 0x274));
    }
    func_02033d24();
}
