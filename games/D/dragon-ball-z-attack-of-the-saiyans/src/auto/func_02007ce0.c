#include "m2c.h"

M2C_UNK func_02007d14(void *);                      /* extern */

void func_02007ce0(void *arg0, s8 *arg1, u32 arg2, u32 arg3) {
    M2C_FIELD(arg0, s8 **, 0)  = arg1;
    M2C_FIELD(arg0, u32 *, 4)  = arg3;
    *M2C_FIELD(arg0, s8 **, 0) = (arg2 / arg3) - 1;
    func_02007d14(arg0);
}
