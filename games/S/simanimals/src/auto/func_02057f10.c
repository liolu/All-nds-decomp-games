#include "m2c.h"

M2C_UNK func_02047c50(s32);                         /* extern */
M2C_UNK func_02028c5c(s32);                         /* extern */
M2C_UNK func_02055f54(s32);                         /* extern */

s32 func_02057f10(s32 arg0) {
    func_02028c5c(arg0 + 0x24);
    func_02055f54(arg0 + 0x4);
    func_02047c50(arg0);
    return arg0;
}
