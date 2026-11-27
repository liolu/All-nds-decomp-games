#include "m2c.h"
s32 _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(s32);
u16 func_020d15bc(void *);
s32 func_020d14f8(u32);
void WaitByLoop(s32);

void func_020e12bc(u32 a, u32 *b) {
    while (1) {
        b[1] = _Z20DisableIRQInterruptsv();
        b[0] = func_020d15bc((void *) 0x27fffe8) & 0x40;
        if (b[0] != 0) {
            return;
        }
        if (func_020d14f8(a) == 0) {
            return;
        }
        _Z20SetIRQInterruptStatei(b[1]);
        WaitByLoop(1);
    }
}
