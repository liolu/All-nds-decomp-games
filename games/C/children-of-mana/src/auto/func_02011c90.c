#include "m2c.h"

s32 func_02011c90(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 8) == 1) {
        return 1;
    }
    return 0;
}
