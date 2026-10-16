#include "m2c.h"

u16 func_0202fc10(void *, u16);                     /* extern */
s32 func_0202fc30();                                /* extern */

s32 func_0202ff44(void *arg0) {
    if (func_0202fc30() != 0) {
        return 0;
    }
    M2C_FIELD(arg0, u16 *, 0xA) = func_0202fc10(arg0, M2C_FIELD(arg0, u16 *, 0xA));
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) + 1);
    return 1;
}
