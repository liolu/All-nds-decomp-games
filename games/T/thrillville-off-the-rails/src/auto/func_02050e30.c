#include "m2c.h"

M2C_UNK func_02052168(void *);                      /* extern */

void *func_02050e30(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_02052168(arg0 + 8);
    return arg0;
}
