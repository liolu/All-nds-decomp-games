#include "m2c.h"

void func_020707a0(void *arg0, u16 arg1) {
    if (arg1 == M2C_FIELD(arg0, u16 *, 0)) {
        return;
    }
    M2C_FIELD(arg0, u16 *, 0) = arg1;
    M2C_FIELD(arg0, u16 *, 2) = (u16) (M2C_FIELD(arg0, u16 *, 2) & ~3);
}
