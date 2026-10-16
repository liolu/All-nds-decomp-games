#include "m2c.h"

s32 func_0200ed54();                                /* extern */

u16 func_0200f4c0(void) {
    if (func_0200ed54() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x027FFCFA;
}
