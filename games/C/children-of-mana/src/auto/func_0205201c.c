/* compiler: 1.2/sp2p3 */
#include "m2c.h"

unsigned long func_0205c948(void);
u16 func_0205a964(void *p);
s32 func_0205aa04(void *p);
unsigned long func_0205c95c(unsigned long ulState);
void WaitByLoop(s32 n);

void func_0205201c(void *p0, u32 *p1) {
    void *lock;
    s32 one;

    lock = (void *) 0x027fffe8;
    one  = 1;
    while (1) {
        p1[1] = func_0205c948();
        p1[0] = func_0205a964(lock) & 0x40;
        if (p1[0] != 0) {
            return;
        }
        if (func_0205aa04(p0) == 0) {
            return;
        }
        func_0205c95c(p1[1]);
        WaitByLoop(one);
    }
}
