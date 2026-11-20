#include "m2c.h"

extern void *data_020d8794;

s32 func_0202ea40(void) {
    if ((s32) M2C_FIELD(data_020d8794, s32 *, 0x20) > 0) {
        return 1;
    }
    return 0;
}
