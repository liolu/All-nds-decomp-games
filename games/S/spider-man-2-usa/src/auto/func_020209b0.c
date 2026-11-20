#include "m2c.h"

extern s32 data_0215cdc8;
extern s32 data_0215cdd0;

s32 func_020209b0(void) {
    if (data_0215cdc8 != data_0215cdd0) {
        return 1;
    }
    return 0;
}
