#include "m2c.h"

s32 func_020321cc(s32);                             /* extern */

void func_020ae4bc(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = func_020321cc(M2C_FIELD(arg0, s32 *, 0));
}
