#include "m2c.h"

M2C_UNK func_020cb83c(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_021da4bc;
extern M2C_UNK data_021da508;
extern M2C_UNK data_021da5bc;

M2C_UNK *func_020bf0f8(void) {
    if (!(M2C_FIELD(&data_021da4bc, s32 *, 0xFC) & 8)) {
        func_020cb83c(&data_021da508, &data_021da5bc);
        M2C_FIELD(&data_021da4bc, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_021da4bc, s32 *, 0xFC) | 8);
    }
    return &data_021da5bc;
}
