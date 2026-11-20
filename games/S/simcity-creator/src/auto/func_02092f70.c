#include "m2c.h"

s32 func_02092f70(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x8B4) & arg1) {
        return 1;
    }
    return 0;
}
