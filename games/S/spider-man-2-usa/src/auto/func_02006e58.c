#include "m2c.h"

extern s32 data_021581b0;

s32 func_02006e58(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x39C) <= (s32) data_021581b0) {
        return 1;
    }
    return 0;
}
