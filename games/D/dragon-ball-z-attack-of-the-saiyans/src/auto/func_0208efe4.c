#include "m2c.h"

void *func_0208efe4(void *arg0, s32 arg1) {
    u8 *base;
    s32 off;

    if (arg1 < 0) {
        return 0;
    }
    if ((u32) arg1 >= *(u32 *) ((u8 *) arg0 + 0x1C)) {
        return 0;
    }
    off  = arg1 * 0xC;
    base = (u8 *) arg0 + 0x20;
    if (*(s32 *) (base + off) == -1) {
        return 0;
    }
    return base + off;
}
