#include "m2c.h"

s32 func_0208f648(s32);                             /* extern */

void func_02047970(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x48) = func_0208f648(arg1);
}
