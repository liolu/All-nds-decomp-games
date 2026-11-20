#include "m2c.h"

M2C_UNK func_02029d98(void *);                      /* extern */
M2C_UNK func_0202af68(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202b150(void *, M2C_UNK);             /* extern */

void func_0202b090(void *arg0, M2C_UNK arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x34) = arg2;
    M2C_FIELD(arg0, s32 *, 0x38) = -1;
    func_0202af68(arg0 + 0x3C, 1);
    func_02029d98(arg0);
    func_0202b150(arg0, arg1);
}
