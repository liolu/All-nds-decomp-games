#include "m2c.h"

u8 func_0208beb8(s32 arg0, s32 arg1, s32 arg2) {
    u8 temp_r0;

    temp_r0 = *(s8 *) (arg0 + 0x40B0 + ((s32) (arg1 + (arg2 << 7)) >> 1));
    if (arg1 & 1) {
        return temp_r0 & 0xF;
    }
    return (u8) ((s32) temp_r0 >> 4);
}