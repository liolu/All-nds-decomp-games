#include "m2c.h"

s32 func_0206b664(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 0x26) == 5) {
        return 1;
    }
    return 0;
}
