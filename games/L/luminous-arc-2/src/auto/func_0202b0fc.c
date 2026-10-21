#include "m2c.h"

M2C_UNK func_02007558(s32, s32, s32);               /* extern */

void func_0202b0fc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg0 & 0x80000000) {
        func_02007558((arg2 << 0xE) + 0x06200000 + (arg1 << 5), (arg3 << 5) + 0x05000400, arg4);
        return;
    }
    func_02007558((arg2 << 0xE) + 0x06000000 + (arg1 << 5), (arg3 << 5) + 0x05000000, arg4);
}
