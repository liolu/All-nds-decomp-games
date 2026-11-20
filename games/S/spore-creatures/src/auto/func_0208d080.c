#include "m2c.h"

s32 func_0208d080(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0) < 2) && ((s32) M2C_FIELD(arg0, s32 *, 4) < 4)) {
        return 1;
    }
    return 0;
}
