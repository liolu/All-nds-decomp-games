#include "m2c.h"

extern s32 data_021581b0;

s32 func_02006ec8(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x390) <= (s32) data_021581b0) {
        return 1;
    }
    return 0;
}
