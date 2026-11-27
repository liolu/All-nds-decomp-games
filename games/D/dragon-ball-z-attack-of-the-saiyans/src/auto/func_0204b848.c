#include "m2c.h"

extern void *data_020d1d24;

s32 func_0204b848(s32 arg0, s32 *arg1) {
    if (M2C_FIELD(data_020d1d24, u8 *, 6) != 0) {
        return 1;
    }
    if (M2C_FIELD(data_020d1d24, u16 *, 0x3C7A) != 0) {
        *arg1 = 1;
    }
    return 1;
}
