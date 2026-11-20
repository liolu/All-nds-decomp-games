#include "m2c.h"

void func_020a6374(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    *(s32 *) 0x04000064 =
        arg5 | ((arg1 << 0x1D) | 0x80000000 | (arg3 << 0x19) | (arg2 << 0x18) | (arg0 << 0x14) | (arg4 << 0x10) | (arg6 << 8));
}
