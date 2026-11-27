#include "m2c.h"

M2C_UNK func_020bf388();                            /* extern */
extern M2C_UNK data_021da4bc;
extern M2C_UNK data_021da5ec;

M2C_UNK *func_020bf3e0(void) {
    if (!(M2C_FIELD(&data_021da4bc, s32 *, 0xFC) & 0x80)) {
        func_020bf388();
        M2C_FIELD(&data_021da4bc, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_021da4bc, s32 *, 0xFC) | 0x80);
    }
    return &data_021da5ec;
}
