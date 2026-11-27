#include "m2c.h"

void func_020575c8(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, u8 *, 0x39) = 0xEU;
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x39) == 0) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x39) = 0U;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(void *, M2C_UNK, M2C_UNK), 0x2C)(arg0, 0, 0);
}
