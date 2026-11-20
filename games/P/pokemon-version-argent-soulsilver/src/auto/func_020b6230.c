#include "m2c.h"

u16 func_020b5efc(void *, u16);                     /* extern */
s32 func_020b5f1c();                                /* extern */

s32 func_020b6230(void *arg0) {
    if (func_020b5f1c() != 0) {
        return 0;
    }
    M2C_FIELD(arg0, u16 *, 0xA) = func_020b5efc(arg0, M2C_FIELD(arg0, u16 *, 0xA));
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) + 1);
    return 1;
}
