#include "m2c.h"

s32 func_02086b28(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0xC) + 8;
}
