#include "m2c.h"

extern s32 data_020cf83c;
extern s32 data_020d87e0;

s32 func_02041c48(void) {
    if ((s32) data_020d87e0 > (s32) data_020cf83c) {
        return 1;
    }
    return 0;
}
