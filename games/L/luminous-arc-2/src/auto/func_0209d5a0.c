#include "engine.h"
#include "m2c.h"

void func_020052bc(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02147904;

void func_0209d5a0(s32 arg0) {
    if ((u32) arg0 >= 0x20U) {
        return;
    }
    func_020052bc(M2C_FIELD(&data_02147904, s32 *, 4), arg0);
}
