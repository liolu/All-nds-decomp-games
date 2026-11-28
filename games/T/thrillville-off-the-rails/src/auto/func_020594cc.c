#include "m2c.h"

M2C_UNK func_02059600(void *);                      /* extern */

void *func_020594cc(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_02059600(arg0 + 8);
    return arg0;
}
