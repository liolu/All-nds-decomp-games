/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020c09a4(M2C_UNK);
void func_020c13b4(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020c0a48(s32 arg0, s32 arg1) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1E) >> 0x1F) == 0) {
        func_020c09a4(arg0);
        return;
    }
    if (arg1 == 0) {
        func_020c09a4(arg0);
        return;
    }
    func_020c13b4(arg0 + 0xE4, 0, arg1);
    M2C_FIELD(arg0, s32 *, 0x10C) = (s32) (M2C_FIELD(arg0, s32 *, 0x10C) | 8);
    M2C_FIELD(arg0, s32 *, 0x14C) = 0;
}
