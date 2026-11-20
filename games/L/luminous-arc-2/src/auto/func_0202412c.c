#include "m2c.h"

M2C_UNK func_0202409c();                            /* extern */
M2C_UNK func_020241a8();                            /* extern */
M2C_UNK func_02024388();                            /* extern */
M2C_UNK func_020246a8();                            /* extern */
M2C_UNK func_020cffa8();                            /* extern */
extern M2C_UNK data_02151424;

void func_0202412c(void) {
    M2C_FIELD(&data_02151424, s32 *, 0xE0) = (s32) (M2C_FIELD(&data_02151424, s32 *, 0xE0) & ~0xFF);
    M2C_FIELD(&data_02151424, u8 *, 0x13)  = (u8) (M2C_FIELD(&data_02151424, u8 *, 0x13) + 1);
    if (M2C_FIELD(&data_02151424, u8 *, 2) == 0) {
        func_020246a8();
    }
    func_02024388();
    func_020241a8();
    if (M2C_FIELD(&data_02151424, u8 *, 3) == 0) {
        func_020cffa8();
    }
    func_0202409c();
}
