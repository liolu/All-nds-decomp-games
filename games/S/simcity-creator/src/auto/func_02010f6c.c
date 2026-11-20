#include "m2c.h"
s32 func_020066e0(void);
void func_020066f4(s32);
u16 func_02004664(void *);
s32 func_020045ac(u32);
void WaitByLoop(s32);

void func_02010f6c(u32 a, u32 *b) {
    while (1) {
        b[1] = func_020066e0();
        b[0] = func_02004664((void *) 0x27fffe8) & 0x40;
        if (b[0] != 0) {
            return;
        }
        if (func_020045ac(a) == 0) {
            return;
        }
        func_020066f4(b[1]);
        WaitByLoop(1);
    }
}
