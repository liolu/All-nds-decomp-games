#include "m2c.h"

void func_02046b70(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 0x8075) = (u8) (M2C_FIELD(arg0, u8 *, 0x8075) | (1 << (arg1 - 1)));
}
