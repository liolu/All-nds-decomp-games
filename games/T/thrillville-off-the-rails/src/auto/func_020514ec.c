#include "m2c.h"

M2C_UNK func_020521a0(void *);                      /* extern */

void *func_020514ec(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_020521a0(arg0 + 8);
    return arg0;
}
