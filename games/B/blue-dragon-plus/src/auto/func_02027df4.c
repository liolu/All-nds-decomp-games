#include "m2c.h"

M2C_UNK func_02031df8(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_02156464;
extern M2C_UNK data_021564b0;
extern M2C_UNK data_02156564;

M2C_UNK *func_02027df4(void) {
    if (!(M2C_FIELD(&data_02156464, s32 *, 0xFC) & 8)) {
        func_02031df8(&data_021564b0, &data_02156564);
        M2C_FIELD(&data_02156464, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_02156464, s32 *, 0xFC) | 8);
    }
    return &data_02156564;
}
