#include "m2c.h"

s32 func_0204c390(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0x7BA58AB0) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x24);
}
