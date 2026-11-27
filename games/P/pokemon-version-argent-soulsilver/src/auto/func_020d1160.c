#include "m2c.h"

typedef struct UnkIrqCallbackInfo {
    M2C_UNK (*func)(s32);
    s32 enable;
    s32 arg;
} UnkIrqCallbackInfo;

extern UnkIrqCallbackInfo data_021e1668[8];
M2C_UNK _Z24EnableSpecificInterruptsj(s32);

void func_020d1160(u32 arg0, M2C_UNK (*arg1)(s32), s32 arg2) {
    u32 mask;

    mask                     = 1 << (arg0 + 3);
    data_021e1668[arg0].func = arg1;
    data_021e1668[arg0].arg  = arg2;
    _Z24EnableSpecificInterruptsj(mask);
    data_021e1668[arg0].enable = 1;
}
