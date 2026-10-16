#include "m2c.h"

extern s32 data_020d0220;

s32 func_02012a84(void) {
    if (data_020d0220 != 0) {
        return 1;
    }
    return 0;
}
