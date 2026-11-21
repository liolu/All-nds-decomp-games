#include "m2c.h"

M2C_UNK func_020959ec(s32 *, void *);               /* extern */

void func_02098cf4(s32 *arg0, void *arg1) {
    *arg0 = M2C_FIELD(arg1, s32 *, 0x14);
    func_020959ec(arg0, arg1 + 0x14);
}
