#include "m2c.h"

M2C_UNK func_020b7d30(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020e5b18;

s32 func_02085744(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & M2C_FIELD(&data_020e5b18, s32 *, 4)) {
        return 0;
    }
    func_020b7d30(arg0, 0);
    M2C_FIELD(&data_020e5b18, s32 *, 4) = (s32) (M2C_FIELD(&data_020e5b18, s32 *, 4) | arg0);
    return 1;
}
