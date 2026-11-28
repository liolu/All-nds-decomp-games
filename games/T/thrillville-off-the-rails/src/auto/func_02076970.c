#include "m2c.h"

M2C_UNK func_02013e44(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_020f433c;
extern M2C_UNK data_020f4388;
extern M2C_UNK data_020f443c;

M2C_UNK *func_02076970(void) {
    if (!(M2C_FIELD(&data_020f433c, s32 *, 0xFC) & 8)) {
        func_02013e44(&data_020f4388, &data_020f443c);
        M2C_FIELD(&data_020f433c, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_020f433c, s32 *, 0xFC) | 8);
    }
    return &data_020f443c;
}
