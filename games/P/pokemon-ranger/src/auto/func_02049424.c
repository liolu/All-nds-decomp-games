#include "m2c.h"

s32 func_02049424(void *arg0, s32 *arg1) {
    *arg1 = arg0 + 0x1FC0;
    return M2C_FIELD(arg0, s32 *, 0x1FBC);
}
