#include "m2c.h"

extern M2C_UNK data_ov013_0224cfa0;

s32 func_ov013_02220400(void) {
    if (M2C_FIELD(&data_ov013_0224cfa0, s32 *, 0) != 0) {
        return 1;
    }
    return 0;
}
