#include "m2c.h"

s32 func_02098d78(void *arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0xC) + arg1;
}
