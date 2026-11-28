#include "m2c.h"

M2C_UNK func_02045558();                            /* extern */

void *func_02045440(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_02045558(arg0, arg1);
    return arg0;
}
