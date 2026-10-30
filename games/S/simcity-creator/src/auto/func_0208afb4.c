#include "m2c.h"

M2C_UNK func_0208af10();                            /* extern */
s8 func_0208b57c(void *, s32);                      /* extern */

void func_0208afb4(void *arg0) {
    func_0208af10();
    M2C_FIELD(arg0, s8 *, 0x60C8) = func_0208b57c(arg0, M2C_FIELD(arg0, s32 *, 0x60BC));
    M2C_FIELD(arg0, s8 *, 8)      = 1;
}
