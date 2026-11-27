#include "m2c.h"

typedef struct {
    u16 useTick;
    u16 pad;
    s32 needResetTimer;
    u64 tickCounter;
} OSiTickState;

extern OSiTickState data_021e19f4;
extern void func_020d1160(u32 arg0, void (*arg1)(s32), s32 arg2);

void func_020d3448(void) {
    data_021e19f4.tickCounter++;
    if (data_021e19f4.needResetTimer != 0) {
        *(s16 *) 0x04000102          = 0;
        *(s16 *) 0x04000100          = 0;
        *(s16 *) 0x04000102          = 0xC1;
        data_021e19f4.needResetTimer = 0;
    }
    func_020d1160(0, (void (*)(s32)) func_020d3448, 0);
}
