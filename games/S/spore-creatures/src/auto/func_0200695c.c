#include "m2c.h"

M2C_UNK func_02006994();                            /* extern */

void *func_0200695c(void *arg0) {
    func_02006994();
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    return arg0;
}
