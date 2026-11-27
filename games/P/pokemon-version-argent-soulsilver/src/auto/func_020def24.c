#include "m2c.h"

s32 func_020de664();                                /* extern */

u16 func_020def24(void) {
    if (func_020de664() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x027FFCFA;
}
