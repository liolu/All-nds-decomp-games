#include "m2c.h"

s32 func_02041000(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x58), s32 *, 0x30) & 1) {
        return 1;
    }
    return 0;
}
