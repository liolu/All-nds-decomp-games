#include "m2c.h"

s32 func_0201c104();                                /* extern */

u16 func_0201ca70(void) {
    if (func_0201c104() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x2FFFCFA;
}
