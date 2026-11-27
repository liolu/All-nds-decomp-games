#include "m2c.h"

s32 func_02002c80(s32 arg0, s32 arg1) {
    return M2C_FIELD(((arg1 * 0x1C) + arg0), s32 *, 4);
}
