#include "m2c.h"

M2C_UNK func_020d5240(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_021df840;

s32 func_020c7b78(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & M2C_FIELD(&data_021df840, s32 *, 8)) {
        return 0;
    }
    func_020d5240(arg0, 0);
    M2C_FIELD(&data_021df840, s32 *, 8) = (s32) (M2C_FIELD(&data_021df840, s32 *, 8) | arg0);
    return 1;
}
