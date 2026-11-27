#include "m2c.h"

s32 func_0205ddf8(void *arg0) {
    if ((M2C_FIELD(arg0, u16 *, 0xC) != 0xFFFF) && (M2C_FIELD(arg0, u8 *, 0x34) == 0) &&
        ((*M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 **, 4) != 0x125EE) ||
         (((u32) (M2C_FIELD(arg0, u8 *, 0x95) << 0x1D) >> 0x1F) != 0))) {
        return 1;
    }
    return 0;
}
