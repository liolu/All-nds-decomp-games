#include "m2c.h"

s32 func_ov075_021148f0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x110) == 4) {
        return 1;
    }
    return 0;
}
