#include "m2c.h"

M2C_UNK func_020bf13c(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_021da4bc;
extern M2C_UNK data_021da4c4;
extern M2C_UNK data_021da67c;

M2C_UNK *func_020bf344(void) {
    if (!(M2C_FIELD(&data_021da4bc, s32 *, 0xFC) & 0x10)) {
        func_020bf13c(&data_021da4c4, &data_021da67c);
        M2C_FIELD(&data_021da4bc, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_021da4bc, s32 *, 0xFC) | 0x10);
    }
    return &data_021da67c;
}
