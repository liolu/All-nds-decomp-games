/* compiler: 1.2/sp2p3 */
#include "m2c.h"

unsigned long func_020bef48(void);
u16 func_020bc8e4(void *p);
s32 func_020bc984(void *p);
unsigned long func_020bef5c(unsigned long ulState);
void WaitByLoop(s32 n);

void func_020c9f60(void *p0, u32 *p1) {
    void *lock;
    s32 one;

    lock = (void *) 0x027fffe8;
    one  = 1;
    while (1) {
        p1[1] = func_020bef48();
        p1[0] = func_020bc8e4(lock) & 0x40;
        if (p1[0] != 0) {
            return;
        }
        if (func_020bc984(p0) == 0) {
            return;
        }
        func_020bef5c(p1[1]);
        WaitByLoop(one);
    }
}
