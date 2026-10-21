#include "m2c.h"

s32 func_020aa4a4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_02173c18;
extern M2C_UNK func_020a6570;
extern M2C_UNK func_020a6580;
extern M2C_UNK func_020a6594;

s32 func_020a65a4(void) {
    if (M2C_FIELD(&data_02173c18, s32 *, 4) == 0) {
        M2C_FIELD(&data_02173c18, s32 *, 4) = func_020aa4a4(8, 0x64, 2, &func_020a6570, &func_020a6580, &func_020a6594);
    }
    return M2C_FIELD(&data_02173c18, s32 *, 4);
}
