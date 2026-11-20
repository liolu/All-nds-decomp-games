#include "m2c.h"

typedef struct {
    u16 useTick;
    u16 pad;
    s32 needResetTimer;
    u64 tickCounter;
} OSiTickState;

extern OSiTickState data_020d0f98;
extern void func_02004234(u32 arg0, void (*arg1)(s32), s32 arg2);

void func_0200617c(void) {
    data_020d0f98.tickCounter++;
    if (data_020d0f98.needResetTimer != 0) {
        *(s16 *) 0x04000102          = 0;
        *(s16 *) 0x04000100          = 0;
        *(s16 *) 0x04000102          = 0xC1;
        data_020d0f98.needResetTimer = 0;
    }
    func_02004234(0, (void (*)(s32)) func_0200617c, 0);
}
