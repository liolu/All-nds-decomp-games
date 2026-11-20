#include "m2c.h"

M2C_UNK func_02047c50(s32);                         /* extern */
M2C_UNK func_02021e20(s32);                         /* extern */
M2C_UNK func_0201becc(s32);                         /* extern */

s32 func_0205cc58(s32 arg0) {
    func_0201becc(arg0 + 0x620);
    func_02021e20(arg0);
    func_02047c50(arg0);
    return arg0;
}
