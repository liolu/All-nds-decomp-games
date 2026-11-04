/* compiler: 1.2/sp2p3 */
#include "m2c.h"

unsigned long _ZN3IRQ7DisableEv(void);
u16 func_02048320(void *p);
s32 func_020483c0(void *p);
unsigned long _ZN3IRQ7RestoreEj(unsigned long ulState);
void WaitByLoop(s32 n);

void func_02058c8c(void *p0, u32 *p1) {
    void *lock;
    s32 one;

    lock = (void *) 0x027fffe8;
    one  = 1;
    while (1) {
        p1[1] = _ZN3IRQ7DisableEv();
        p1[0] = func_02048320(lock) & 0x40;
        if (p1[0] != 0) {
            return;
        }
        if (func_020483c0(p0) == 0) {
            return;
        }
        _ZN3IRQ7RestoreEj(p1[1]);
        WaitByLoop(one);
    }
}
