#include "m2c.h"

u32 OS_DisableInterrupts(void);
void OS_RestoreInterrupts(u32 arg0);
void func_01ff8554(s32 arg0, u32 arg1, u32 arg2, u32 arg3);

void MI_DmaFill32(s32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    u32 state;
    volatile u32 *ctrl;

    if (param_4 == 0) {
        return;
    }
    ctrl = (volatile u32 *) (0x040000B0 + (((param_1 * 3) + 2) * 4));
    while (*ctrl & 0x80000000) {
    }
    state                                                 = OS_DisableInterrupts();
    *(volatile u32 *) (0x04000000 + (param_1 * 4) + 0xE0) = param_3;
    func_01ff8554(param_1, 0x040000E0 + (param_1 * 4), param_2, (param_4 >> 2) | 0x85000000);
    OS_RestoreInterrupts(state);
    while (*ctrl & 0x80000000) {
    }
}
