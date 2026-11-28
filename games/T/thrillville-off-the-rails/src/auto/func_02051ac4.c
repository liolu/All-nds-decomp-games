#include "m2c.h"

M2C_UNK func_020521d8(void *);                      /* extern */

void *func_02051ac4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_020521d8(arg0 + 8);
    return arg0;
}
