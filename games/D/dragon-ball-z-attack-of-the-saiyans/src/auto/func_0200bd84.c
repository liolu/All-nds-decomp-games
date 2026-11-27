#include "m2c.h"

extern M2C_UNK func_0200bd28;

s32 func_0200bd84(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &func_0200bd28;
    M2C_FIELD(arg0, s32 *, 0x10)     = 0;
    return 0;
}
