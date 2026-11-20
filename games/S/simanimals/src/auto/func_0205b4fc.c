#include "m2c.h"

M2C_UNK func_02047c50(s32);                         /* extern */
M2C_UNK func_0201befc(s32);                         /* extern */
M2C_UNK func_0205bcc8(s32);                         /* extern */

s32 func_0205b4fc(s32 arg0) {
    func_0205bcc8(arg0 + 0x98);
    func_0201befc(arg0);
    func_02047c50(arg0);
    return arg0;
}
