#include "m2c.h"

s32 func_020827a0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x7950) + (M2C_FIELD(arg0, s32 *, 0x7948) + M2C_FIELD(arg0, s32 *, 0x794C));
}
