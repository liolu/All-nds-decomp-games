#include "m2c.h"

s32 func_02069d2c(void) {
    if (*(u16 *) 0x04000304 & 1) {
        return 1;
    }
    return 0;
}
