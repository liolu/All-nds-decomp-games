#include "m2c.h"

M2C_UNK func_02047c50(s32);                         /* extern */
M2C_UNK func_0205c4d8(s32);                         /* extern */
M2C_UNK func_0203d684(s32);                         /* extern */

s32 func_0203d27c(s32 arg0) {
    func_0203d684(arg0 + 0x9C);
    func_0205c4d8(arg0);
    func_02047c50(arg0);
    return arg0;
}
