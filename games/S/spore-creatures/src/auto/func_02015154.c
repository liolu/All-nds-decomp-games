#include "m2c.h"

s32 func_02015154(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0x78) != 0) {
        return 1;
    }
    return 0;
}
