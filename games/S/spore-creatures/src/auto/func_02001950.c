#include "m2c.h"

s32 func_02001950(void *arg0) {
    if (((u32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u8 *, 0x24) << 0x1F) >> 0x1F) != 0) {
        return 1;
    }
    return 0;
}
