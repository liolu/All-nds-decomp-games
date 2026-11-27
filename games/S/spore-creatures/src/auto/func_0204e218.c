#include "m2c.h"

M2C_UNK func_0204e024(void *, s8, M2C_UNK);         /* extern */
s32 func_02056350(s32);                             /* extern */

void func_0204e218(void *arg0, s32 arg1, M2C_UNK arg2) {
    func_0204e024(arg0, (s8) (arg1 - func_02056350(M2C_FIELD(arg0, s32 *, 0x1BC))), arg2);
}
