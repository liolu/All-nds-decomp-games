#include "m2c.h"

u16 func_0201ff1c(void *, u16);                     /* extern */
s32 func_0201ff3c();                                /* extern */

s32 func_02020248(void *arg0) {
    if (func_0201ff3c() != 0) {
        return 0;
    }
    M2C_FIELD(arg0, u16 *, 8)   = func_0201ff1c(arg0, M2C_FIELD(arg0, u16 *, 8));
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) - 1);
    return 1;
}
