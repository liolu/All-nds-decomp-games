#include "m2c.h"

s32 func_02035598(void *arg0) {
    if (arg0 == NULL) {
        return -1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x30) != 4) {
        return -1;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x34) & 0x40)) {
        return 1;
    }
    return 0;
}
