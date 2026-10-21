#include "m2c.h"

extern void *data_02097640;

s32 func_02028efc(void) {
    if (data_02097640 == NULL) {
        return 0;
    }
    if (((u32) (M2C_FIELD(data_02097640, s32 *, 0x20) << 0x1F) >> 0x1F) != 0) {
        return 1;
    }
    return 0;
}
