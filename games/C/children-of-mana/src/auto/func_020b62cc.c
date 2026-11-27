#include "m2c.h"

void func_020b62cc(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u16 *, 0xFC) = (u16) (M2C_FIELD(arg0, u16 *, 0xFC) & ~arg1);
}
