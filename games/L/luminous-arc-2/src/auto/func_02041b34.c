#include "m2c.h"

s32 func_02041b34(s32 arg0, s32 arg1) {
    if ((arg0 < 0x10) || (arg0 >= (s32) (M2C_FIELD((void *) 0x06008002, u16 *, 0) + 0x10)) || (arg1 < 0x10) ||
        (arg1 >= (s32) (M2C_FIELD((void *) 0x06008002, u16 *, 2) + 0x10))) {
        return 1;
    }
    return 0;
}
