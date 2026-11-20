#include "m2c.h"

M2C_UNK func_02027e38();                            /* extern */
extern M2C_UNK data_02156464;
extern M2C_UNK data_02156594;

M2C_UNK *func_02027e90(void) {
    if (!(M2C_FIELD(&data_02156464, s32 *, 0xFC) & 0x80)) {
        func_02027e38();
        M2C_FIELD(&data_02156464, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_02156464, s32 *, 0xFC) | 0x80);
    }
    return &data_02156594;
}
