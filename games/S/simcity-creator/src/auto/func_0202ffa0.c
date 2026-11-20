#include "m2c.h"

u16 func_0202fc10(void *, u16);                     /* extern */
s32 func_0202fc48();                                /* extern */

s32 func_0202ffa0(void *arg0) {
    if (func_0202fc48() != 0) {
        return 0;
    }
    M2C_FIELD(arg0, u16 *, 8)   = func_0202fc10(arg0, M2C_FIELD(arg0, u16 *, 8));
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) - 1);
    return 1;
}
