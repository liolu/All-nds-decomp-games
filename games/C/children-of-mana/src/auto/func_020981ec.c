#include "m2c.h"

s32 func_020981ec(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x97) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x38);
    }
    return -1;
}
