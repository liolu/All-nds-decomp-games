#include "m2c.h"

typedef struct {
    u16 useTick;
    u16 pad;
    s32 needResetTimer;
    u64 tickCounter;
} OSiTickState;

extern OSiTickState data_020f1ca8;
extern void func_020b45b8(u32 arg0, void (*arg1)(s32), s32 arg2);

void func_020b6548(void) {
    data_020f1ca8.tickCounter++;
    if (data_020f1ca8.needResetTimer != 0) {
        *(s16 *) 0x04000102          = 0;
        *(s16 *) 0x04000100          = 0;
        *(s16 *) 0x04000102          = 0xC1;
        data_020f1ca8.needResetTimer = 0;
    }
    func_020b45b8(0, (void (*)(s32)) func_020b6548, 0);
}
