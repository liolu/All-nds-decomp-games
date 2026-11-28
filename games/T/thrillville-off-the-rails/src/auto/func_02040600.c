#include "m2c.h"

M2C_UNK func_02040628(void *);                      /* extern */

void *func_02040600(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_02040628(arg0 + 8);
    return arg0;
}
