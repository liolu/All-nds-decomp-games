#include "m2c.h"

M2C_UNK func_0202409c();                            /* extern */
M2C_UNK func_020cffa8();                            /* extern */
extern M2C_UNK data_02151424;

void func_02024184(void) {
    M2C_FIELD(&data_02151424, s32 *, 0xE0) = (s32) (M2C_FIELD(&data_02151424, s32 *, 0xE0) & ~0xFF);
    func_020cffa8();
    func_0202409c();
}
