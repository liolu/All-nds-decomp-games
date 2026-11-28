#include "m2c.h"

M2C_UNK func_02060dcc(void *);                      /* extern */

void *func_02060da8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_02060dcc(arg0 + 8);
    return arg0;
}
