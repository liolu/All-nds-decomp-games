#include "m2c.h"

void func_020b4450(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s8 *, 0x84) = 1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), M2C_UNK(**)(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32),
              8)(arg0 + 0x28, 0, arg1, arg2, arg3, arg4);
}
