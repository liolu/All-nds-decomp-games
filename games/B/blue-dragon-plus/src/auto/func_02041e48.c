#include "m2c.h"

M2C_UNK func_02036954();                            /* extern */
M2C_UNK func_02038e24(s32);                         /* extern */

void func_02041e48(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_02036954(arg0);
    }
    func_02038e24(M2C_FIELD(arg1, s32 *, 4));
}
