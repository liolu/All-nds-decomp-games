#include "m2c.h"

s32 func_020480f8(void *arg0, s32 arg1) {
    return (arg1 * 0x18) + M2C_FIELD(arg0, s32 *, 4);
}
