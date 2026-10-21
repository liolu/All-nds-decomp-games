#include "m2c.h"

M2C_UNK func_020047fc();                            /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */

void func_02017da4(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_020047fc(arg0);
    }
    func_02006bf4(M2C_FIELD(arg1, s32 *, 4));
}
