#include "m2c.h"

extern s32 data_020d87f4;

s32 func_02009130(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1E0) == data_020d87f4) {
        return 1;
    }
    return 0;
}
