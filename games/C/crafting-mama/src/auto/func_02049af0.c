#include "m2c.h"

s32 func_02049af0(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0x4AB67CDA) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x28);
}
