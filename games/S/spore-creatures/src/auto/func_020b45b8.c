#include "m2c.h"

typedef struct UnkIrqCallbackInfo {
    M2C_UNK (*func)(s32);
    s32 enable;
    s32 arg;
} UnkIrqCallbackInfo;

extern UnkIrqCallbackInfo data_020f191c[8];
M2C_UNK func_020b462c(s32);

void func_020b45b8(u32 arg0, M2C_UNK (*arg1)(s32), s32 arg2) {
    u32 mask;

    mask                     = 1 << (arg0 + 3);
    data_020f191c[arg0].func = arg1;
    data_020f191c[arg0].arg  = arg2;
    func_020b462c(mask);
    data_020f191c[arg0].enable = 1;
}
