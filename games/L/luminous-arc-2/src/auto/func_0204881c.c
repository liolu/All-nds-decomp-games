#include "m2c.h"

M2C_UNK func_020caff8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020cc3fc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_02152824;

s32 func_0204881c(void) {
    func_020cc3fc(0x3E, 8, 1);
    func_020cc3fc(0x3C, 2, 1);
    func_020caff8(0x20, 0xA, 0, 7, (s32) * (u16 *) 0x0400000A, 0);
    return M2C_FIELD(&data_02152824, u8 *, 0xF8) = (u8) (M2C_FIELD(&data_02152824, u8 *, 0xF8) | 1);
}
