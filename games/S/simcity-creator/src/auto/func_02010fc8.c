#include "m2c.h"

M2C_UNK func_020045a0();                            /* extern */
M2C_UNK func_020066f4(s32);                         /* extern */

void func_02010fc8(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_020045a0(arg0);
    }
    func_020066f4(M2C_FIELD(arg1, s32 *, 4));
}
