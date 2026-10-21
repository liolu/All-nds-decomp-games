#include "m2c.h"

extern void *data_020caef4;

s32 func_02075210(void) {
    if (data_020caef4 == NULL) {
        return 1;
    }
    if (M2C_FIELD(data_020caef4, u8 *, 0x58) == 1) {
        return 1;
    }
    return 0;
}
