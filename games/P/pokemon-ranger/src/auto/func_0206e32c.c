#include "m2c.h"

void func_0206e32c(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x84) = (u16) (M2C_FIELD(arg0, u16 *, 0x84) | 1);
    M2C_FIELD(arg0, u8 *, 0x339) = (u8) ((M2C_FIELD(arg0, u8 *, 0x339) & ~7) | 2);
}
