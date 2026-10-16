#include "m2c.h"

M2C_UNK func_02001f60(s32);                         /* extern */
M2C_UNK func_02090624(s32);                         /* extern */

s32 func_02090ab0(s32 arg0) {
    func_02001f60(arg0 + 16);
    func_02090624(arg0);
    return arg0;
}
