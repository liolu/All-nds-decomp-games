#include "m2c.h"
s32 func_020b6bd0(void);
void func_020b6be4(s32);
u16 func_020b49e8(void *);
s32 func_020b4930(u32);
void WaitByLoop(s32);

void func_020c08c8(u32 a, u32 *b) {
    while (1) {
        b[1] = func_020b6bd0();
        b[0] = func_020b49e8((void *) 0x27fffe8) & 0x40;
        if (b[0] != 0) {
            return;
        }
        if (func_020b4930(a) == 0) {
            return;
        }
        func_020b6be4(b[1]);
        WaitByLoop(1);
    }
}
