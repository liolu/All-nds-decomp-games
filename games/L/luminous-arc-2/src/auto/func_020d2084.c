#include "m2c.h"

extern M2C_UNK data_021465e4;
extern M2C_UNK data_021470ac;
extern M2C_UNK data_021470b4;
extern M2C_UNK data_02185160;

void func_020d2084(s32 arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(&data_02185160, s32 *, 0x14);
    if (M2C_FIELD(&data_02185160, M2C_UNK(**)(M2C_UNK *, s32), 0x1C) != NULL) {
        M2C_FIELD(&data_02185160, M2C_UNK(**)(M2C_UNK *, s32), 0x1C)(&data_021470ac,
                                                                     *((M2C_UNK *) ((s8 *) &data_021465e4 + (temp_r4 * 4))));
    }
    M2C_FIELD(&data_02185160, s32 *, 0x14) = arg0;
    if (M2C_FIELD(&data_02185160, M2C_UNK(**)(M2C_UNK *, s32), 0x1C) != NULL) {
        M2C_FIELD(&data_02185160, M2C_UNK(**)(M2C_UNK *, s32), 0x1C)(&data_021470b4,
                                                                     *((M2C_UNK *) ((s8 *) &data_021465e4 + (arg0 * 4))));
    }
    if (M2C_FIELD(&data_02185160, M2C_UNK(**)(s32, s32), 0x24) == NULL) {
        return;
    }
    M2C_FIELD(&data_02185160, M2C_UNK(**)(s32, s32), 0x24)(M2C_FIELD(&data_02185160, s32 *, 0x14), temp_r4);
}
