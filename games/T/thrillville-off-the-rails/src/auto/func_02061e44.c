#include "m2c.h"

M2C_UNK func_02061eac(void *);                      /* extern */

void *func_02061e44(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_02061eac(arg0 + 8);
    return arg0;
}
