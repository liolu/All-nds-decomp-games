#include "m2c.h"

M2C_UNK func_02017a00();                            /* extern */
M2C_UNK func_02019d18(s32);                         /* extern */

void func_0200922c(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_02017a00(arg0);
    }
    func_02019d18(M2C_FIELD(arg1, s32 *, 4));
}
