/* compiler: 1.2/sp2p3 */
#include "m2c.h"

unsigned long func_021054ac(void);
u16 func_02102ab8(void *p);
s32 func_02102b58(void *p);
unsigned long func_021054c0(unsigned long ulState);
void WaitByLoop(s32 n);

void func_0210fa88(void *p0, u32 *p1) {
    void *lock;
    s32 one;

    lock = (void *) 0x027fffe8;
    one  = 1;
    while (1) {
        p1[1] = func_021054ac();
        p1[0] = func_02102ab8(lock) & 0x40;
        if (p1[0] != 0) {
            return;
        }
        if (func_02102b58(p0) == 0) {
            return;
        }
        func_021054c0(p1[1]);
        WaitByLoop(one);
    }
}
