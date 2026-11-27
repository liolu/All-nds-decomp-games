#include "m2c.h"

M2C_UNK func_02000de0();                            /* extern */

void *func_02000dc0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_02000de0(arg0);
    return arg0;
}
