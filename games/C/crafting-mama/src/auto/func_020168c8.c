#include "m2c.h"

u32 func_020168c8(s32 arg0) {
    return (u32) (M2C_FIELD(((arg0 * 0xC) + 0x04000000), s32 *, 0xB8) & 0x80000000) >> 0x1F;
}
