#include "m2c.h"

u16 func_0200d168(void *, u16);                     /* extern */
s32 func_0200d13c();                                /* extern */

s32 func_0200cd98(void *arg0) {
    if (func_0200d13c() != 0) {
        return 0;
    }
    M2C_FIELD(arg0, u16 *, 8)   = func_0200d168(arg0, M2C_FIELD(arg0, u16 *, 8));
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) - 1);
    return 1;
}
