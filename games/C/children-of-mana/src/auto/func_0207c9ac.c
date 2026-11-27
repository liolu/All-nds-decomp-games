#include "m2c.h"

extern s32 data_021250dc;

s32 func_0207c9ac(s32 arg0) {
    if (data_021250dc != 0) {
        return (0x60 * arg0) + data_021250dc;
    }
    return 0;
}
