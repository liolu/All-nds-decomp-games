#include "m2c.h"

s32 func_0201037c();                                /* extern */

u16 func_02010c3c(void) {
    if (func_0201037c() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x027FFCFA;
}
