#include "m2c.h"

s32 func_020801f8(s32);                             /* extern */

s32 func_02043a24(s32 arg0, s32 arg1) {
    return func_020801f8(((arg0 * arg0) + (arg1 * arg1)) << 8) >> 0xA;
}
