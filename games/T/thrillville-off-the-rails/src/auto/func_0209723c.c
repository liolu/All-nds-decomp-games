#include "m2c.h"

M2C_UNK func_02097310(void *);                      /* extern */

void *func_0209723c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_02097310(arg0 + 8);
    return arg0;
}
