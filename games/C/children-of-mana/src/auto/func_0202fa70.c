#include "m2c.h"

void func_0202fa70(void *arg0, u16 *arg1) {
    M2C_FIELD(arg0, u16 *, 0x1E)  = (u16) *arg1;
    M2C_FIELD(arg0, void **, 0xC) = (void *) (((s8 *) arg1 + 4));
}
