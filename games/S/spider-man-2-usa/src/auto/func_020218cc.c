#include "m2c.h"

extern M2C_UNK data_0207a4a0;

s32 func_020218cc(void *arg0) {
    if ((s32) M2C_FIELD(arg0, u16 *, 0x296) <= (s32) M2C_FIELD(&data_0207a4a0, u16 *, 6)) {
        return 1;
    }
    return 0;
}
