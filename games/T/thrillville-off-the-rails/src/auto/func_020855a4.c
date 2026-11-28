#include "m2c.h"

M2C_UNK func_02074314(void *);                      /* extern */
M2C_UNK func_02085774();                            /* extern */

void *func_020855a4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_02085774(arg0);
    func_02074314(arg0);
    return arg0;
}
