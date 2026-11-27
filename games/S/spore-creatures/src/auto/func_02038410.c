#include "m2c.h"

void func_02038410(void *arg0, s32 arg1) {
    *(s32 *) 0x040004A4 = M2C_FIELD(arg0, s32 *, 8) | (arg1 << 0x10);
}
