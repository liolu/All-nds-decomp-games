#include "m2c.h"

s32 func_02041018(void *arg0) {
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x58), s32 *, 0x3C) > 0) {
        return 1;
    }
    return 0;
}
