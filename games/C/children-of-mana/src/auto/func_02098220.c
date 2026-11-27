#include "m2c.h"

s32 func_02098220(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x93) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x38);
    }
    return -1;
}
