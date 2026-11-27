#include "m2c.h"

void func_020410fc(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC0) = (s32) (M2C_FIELD(arg0, s32 *, 0xC0) & ~1);
}
