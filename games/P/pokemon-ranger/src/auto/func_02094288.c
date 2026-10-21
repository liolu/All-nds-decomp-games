#include "m2c.h"

s32 func_02094288(void *arg0, void *arg1) {
    if ((s32) M2C_FIELD(arg1, s32 *, 8) < (s32) M2C_FIELD(arg0, s32 *, 0x4FC)) {
        return 1;
    }
    return 0;
}
