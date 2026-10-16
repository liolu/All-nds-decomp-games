#include "engine.h"
#include "m2c.h"

void func_02018564(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0201aed0(M2C_UNK);
void func_0201aef0(M2C_UNK);

void func_02003fd4(s32 arg0) {
    func_02018564(M2C_FIELD(arg0, s32 *, 0x4C), 0, 1 << M2C_FIELD(arg0, s32 *, 0x48), 0);
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x2C) << 0x1E) >> 0x1F) != 0) {
        return;
    }
    func_0201aed0(arg0 + 8);
    func_0201aef0(arg0 + 0x18);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 2);
}
