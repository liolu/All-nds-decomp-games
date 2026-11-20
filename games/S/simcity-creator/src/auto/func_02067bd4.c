#include "m2c.h"

u8 func_02067bd4(s32 arg0, s32 arg1) {
    return (u8) M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x14);
}
