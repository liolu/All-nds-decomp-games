#include "m2c.h"

M2C_UNK func_ov000_0212a068(s32);                         /* extern */
M2C_UNK func_02030130(s32);                         /* extern */

s32 func_ov000_0212c508(s32 arg0) {
    func_02030130(arg0 + 8);
    func_ov000_0212a068(arg0);
    return arg0;
}
