#include "m2c.h"

s32 func_02049488(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1B78) != 0) {
        return 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1AEC) == 0x15) {
        return 1;
    }
    return 0;
}
