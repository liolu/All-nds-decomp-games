#include "m2c.h"

M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_ov000_0212a068(s32);                         /* extern */
M2C_UNK func_02030130(s32);                         /* extern */

s32 func_ov000_0212c528(s32 arg0) {
    func_02030130(arg0 + 0x8);
    func_ov000_0212a068(arg0);
    func_020934a8(arg0);
    return arg0;
}
