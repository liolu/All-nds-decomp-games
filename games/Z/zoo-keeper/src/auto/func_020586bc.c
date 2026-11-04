#include "m2c.h"

extern M2C_UNK data_0206efc0;

s32 func_020586bc(void) {
    if (M2C_FIELD(&data_0206efc0, s32 *, 0) != 0) {
        return 1;
    }
    return 0;
}
