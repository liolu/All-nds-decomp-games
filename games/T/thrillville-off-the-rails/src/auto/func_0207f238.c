#include "m2c.h"

M2C_UNK func_020257c8(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020fa998;

s32 func_0207f238(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & M2C_FIELD(&data_020fa998, s32 *, 4)) {
        return 0;
    }
    func_020257c8(arg0, 0);
    M2C_FIELD(&data_020fa998, s32 *, 4) = (s32) (M2C_FIELD(&data_020fa998, s32 *, 4) | arg0);
    return 1;
}
