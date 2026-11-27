#include "m2c.h"

M2C_UNK func_020b77c4(void *);                      /* extern */
M2C_UNK func_020b89b8(void *, M2C_UNK);             /* extern */
M2C_UNK func_020b8bc4(void *, M2C_UNK);             /* extern */

void func_020b8b04(void *arg0, M2C_UNK arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x34) = arg2;
    M2C_FIELD(arg0, s32 *, 0x38) = -1;
    func_020b89b8(arg0 + 0x3C, 1);
    func_020b77c4(arg0);
    func_020b8bc4(arg0, arg1);
}
