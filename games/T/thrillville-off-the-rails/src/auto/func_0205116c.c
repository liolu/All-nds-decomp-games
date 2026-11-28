#include "m2c.h"

M2C_UNK func_02052184(void *);                      /* extern */

void *func_0205116c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_02052184(arg0 + 8);
    return arg0;
}
