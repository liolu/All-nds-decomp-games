#include "m2c.h"
extern u32 func_02006be0(void);
extern u32 func_02006bf4(u32);
extern u32 func_02004808(s32);
extern u32 func_020048c0(u32);
extern void WaitByLoop(s32);

void func_02017d48(s32 a0, s32 *a1) {
    u32 flag;
    for (;;) {
        *(u32 *) ((s8 *) a1 + 4) = func_02006be0();
        flag                     = func_020048c0(0x27fffe8) & 0x40;
        *(u32 *) ((s8 *) a1 + 0) = flag;
        if (flag != 0) {
            return;
        }
        if (func_02004808(a0) == 0) {
            return;
        }
        func_02006bf4(*(u32 *) ((s8 *) a1 + 4));
        WaitByLoop(1);
    }
}
