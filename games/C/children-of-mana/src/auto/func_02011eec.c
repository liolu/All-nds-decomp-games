#include "m2c.h"

u8 func_02011eec(s32 arg0, s32 arg1) {
    return M2C_FIELD((arg0 + arg1), u8 *, 0x1F);
}
