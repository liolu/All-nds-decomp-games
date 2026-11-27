#include "m2c.h"

void func_020118bc(u32 *arg0, u32 arg1) {
    if (arg1 < -1U) {
        *arg0 = arg1;
        return;
    }
    *arg0 = -1U;
}
