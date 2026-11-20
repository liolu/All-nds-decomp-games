#include "m2c.h"

s32 func_0203c588(s32 arg0) {
    s32 temp_r0;

    temp_r0 = arg0 & 0x3F;
    if (temp_r0 != 0) {
        return 0x40 - temp_r0;
    }
    return 0;
}
