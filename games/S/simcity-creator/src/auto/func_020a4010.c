#include "m2c.h"

u16 func_020a4010(s32 arg0, void *arg1) {
    return (u16) (M2C_FIELD(arg1, u8 *, 0xE) + (M2C_FIELD(arg1, u8 *, 0xC) * 0x10));
}
