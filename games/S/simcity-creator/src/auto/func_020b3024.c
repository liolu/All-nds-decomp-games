#include "m2c.h"

void func_020b3024(void *arg0, u16 arg1) {
    if (M2C_FIELD(arg0, u16 *, 0x20) == arg1) {
        return;
    }
    M2C_FIELD(arg0, u16 *, 0x20) = arg1;
    *(s32 *) 0x040004A4          = (arg1 << 0x10) | 0x30C0;
}
