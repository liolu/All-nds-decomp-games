#include "engine.h"
#include "m2c.h"

M2C_UNK func_02015764(void);

s32 func_020157b0(void) {
    if (func_02015764() & 0x10000000) {
        return 1;
    }
    return 0;
}
