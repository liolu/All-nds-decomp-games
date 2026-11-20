/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

void func_02060948(s32);
void func_02060fb8(void);

s32 func_0204a3cc(void) {
    s32 st;

    func_02060948(0);
    st = 1;
    if (st == 2) {
        return 1;
    }
    func_02060fb8();
    return 1;
}
