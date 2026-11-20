#include "engine.h"
#include "m2c.h"

void func_02000fb4(M2C_UNK, M2C_UNK);
void func_02003758(M2C_UNK);

extern M2C_UNK data_02032330;

void func_02004124(s32 arg0) {
    func_02003758(M2C_FIELD(arg0, s32 *, 0x48));
    func_02000fb4((s32) &data_02032330, arg0);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) & ~1);
}
