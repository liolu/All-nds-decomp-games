#include "m2c.h"

s32 func_020d8f30(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 4) <= 2U) {
        return 1;
    }
    return 0;
}
