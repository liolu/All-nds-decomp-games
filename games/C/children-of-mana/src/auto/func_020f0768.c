#include "m2c.h"

extern M2C_UNK data_0210f3a0;

u8 func_020f0768(s32 arg0, s32 arg1) {
    return *(s8 *) (arg0 + ((arg1 * 0xA) + (s32) &data_0210f3a0));
}