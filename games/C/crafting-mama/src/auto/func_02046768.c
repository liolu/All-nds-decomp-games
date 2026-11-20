#include "m2c.h"

s32 func_02046768(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x74) = arg1;
    }
    return 1;
}
