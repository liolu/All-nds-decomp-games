#include "m2c.h"

M2C_UNK func_02020b10(void *);                      /* extern */
M2C_UNK func_0202194c(void *, M2C_UNK);             /* extern */
M2C_UNK func_02021ab0(void *, M2C_UNK);             /* extern */

void func_02021a74(void *arg0, M2C_UNK arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x34) = arg2;
    M2C_FIELD(arg0, s32 *, 0x38) = -1;
    func_0202194c(arg0 + 0x3C, 1);
    func_02020b10(arg0);
    func_02021ab0(arg0, arg1);
}
