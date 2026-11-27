#include "m2c.h"

M2C_UNK func_02037800();                            /* extern */
M2C_UNK func_02038514(s32);                         /* extern */
M2C_UNK func_020a2ea8(s32);                         /* extern */

void *func_0203a624(void *arg0) {
    func_02037800();
    func_02038514(arg0 + 0x10);
    func_020a2ea8(arg0 + 0x74);
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    return arg0;
}
