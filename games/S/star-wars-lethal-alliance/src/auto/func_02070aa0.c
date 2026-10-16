#include "m2c.h"

s32 func_020702e4();                                /* extern */

u16 func_02070aa0(void) {
    if (func_020702e4() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x027FFCFA;
}
