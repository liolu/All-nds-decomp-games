#include "m2c.h"

M2C_UNK func_02014f84(s32, s32);                    /* extern */

void func_020a33d0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x2FC) & 1) {
        func_02014f84(0x0400006C, (s32) M2C_FIELD(arg0, s32 *, 0x2F0) >> 0xC);
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x2FC) & 2)) {
        return;
    }
    func_02014f84(0x0400106C, (s32) M2C_FIELD(arg0, s32 *, 0x2F0) >> 0xC);
}
