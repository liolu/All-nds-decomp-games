#include "engine.h"
#include "m2c.h"

void func_020ae18c(M2C_UNK);
void func_020ae464(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_020ae100(s32 arg0) {
    u16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u16 *, 0xC);
    if (temp_r3 != 0) {
        func_020ae464(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), (s32) temp_r3);
    }
    func_020ae18c(arg0);
}
