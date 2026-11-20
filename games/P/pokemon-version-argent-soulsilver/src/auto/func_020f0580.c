#include "m2c.h"

M2C_UNK func_020f49c0(s32);                         /* extern */
M2C_UNK func_020f04b0(s32);                         /* extern */

s32 func_020f0580(s32 arg0) {
    func_020f04b0(arg0 + 4);
    func_020f49c0(arg0);
    return arg0;
}
