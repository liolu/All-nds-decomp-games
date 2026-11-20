#include "m2c.h"

M2C_UNK func_0205999c(void *, M2C_UNK, M2C_UNK, u16); /* extern */
s32 func_02070818(s32);                             /* extern */

void func_02059964(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0205999c(arg0, arg1, arg2, (u16) (func_02070818(M2C_FIELD(arg0, s32 *, 8)) + 0x42));
}
