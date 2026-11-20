#include "m2c.h"

void func_0200e0d8(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x610) == 0) {
        M2C_FIELD(arg0, s8 *, 0x60E) = 0;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x60E)  = 1;
    M2C_FIELD(arg0, u16 *, 0x610) = (u16) (M2C_FIELD(arg0, u16 *, 0x610) - 1);
}
