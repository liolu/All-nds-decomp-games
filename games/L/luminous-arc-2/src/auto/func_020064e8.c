#include "m2c.h"

typedef struct {
    u16 useTick;
    u16 pad;
    s32 needResetTimer;
    u64 tickCounter;
} OSiTickState;

extern OSiTickState data_02147c38;
extern void func_02004490(u32 arg0, void (*arg1)(s32), s32 arg2);

void func_020064e8(void) {
    data_02147c38.tickCounter++;
    if (data_02147c38.needResetTimer != 0) {
        *(s16 *) 0x04000102          = 0;
        *(s16 *) 0x04000100          = 0;
        *(s16 *) 0x04000102          = 0xC1;
        data_02147c38.needResetTimer = 0;
    }
    func_02004490(0, (void (*)(s32)) func_020064e8, 0);
}
