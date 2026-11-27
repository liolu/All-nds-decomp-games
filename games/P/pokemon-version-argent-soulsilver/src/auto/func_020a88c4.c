#include "engine.h"
#include "m2c.h"

void func_020d2058(M2C_UNK, M2C_UNK);

extern M2C_UNK data_021e16c0;

void func_020a88c4(s32 arg0) {
    if ((u32) arg0 >= 0x20U) {
        return;
    }
    func_020d2058(M2C_FIELD(&data_021e16c0, s32 *, 4), arg0);
}
