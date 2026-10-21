#include "m2c.h"

s32 func_020c8664();                                /* extern */

void func_0204a3d4(void) {
    if (func_020c8664() != 0) {
        return;
    }
    *(u16 *) 0x04000204 |= 0x8000;
}
