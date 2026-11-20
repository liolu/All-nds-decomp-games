#include "m2c.h"

s32 func_02044dc4(void *arg0, s32 arg1) {
    return (arg1 * M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x600) * 4)), s32 *, 0x5B0)) + (s32) (arg0 + 0x200);
}
