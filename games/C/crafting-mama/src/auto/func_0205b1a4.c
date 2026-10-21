#include "m2c.h"

s32 func_0205b1a4(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0x5AA55BC4) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x24);
}
