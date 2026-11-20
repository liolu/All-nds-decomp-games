/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 func_0206094c(void);
void func_02060960(s32);
s32 func_0205bf9c(s32);
s32 func_0205bcd0(u32);
void func_0205bcb4(s32, s32);

void func_0205c97c(s32 a, s32 b, u32 c) {
    s32 prev;
    s32 irq;
    if (b == 0) {
        return;
    }
    irq  = func_0206094c();
    prev = func_0205bf9c(b);
    if (a == func_0205bcd0(c)) {
        func_0205bcb4(c, 0);
    }
    func_0205bf9c(prev);
    func_02060960(irq);
}
