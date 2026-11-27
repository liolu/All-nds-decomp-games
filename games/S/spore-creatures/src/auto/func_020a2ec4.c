#include "m2c.h"

M2C_UNK func_02090bf0(u16);                         /* extern */
M2C_UNK func_0209318c();                            /* extern */

void *func_020a2ec4(void *arg0) {
    func_02090bf0(M2C_FIELD(arg0, u16 *, 4));
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_0209318c();
    }
    return arg0;
}
