#include "m2c.h"

M2C_UNK func_02058d1c(s32);                         /* extern */
M2C_UNK func_020022b8(s32);                         /* extern */
M2C_UNK func_02055ab8(s32);                         /* extern */

s32 func_0203631c(s32 arg0) {
    func_020022b8(arg0 + 0xC8);
    func_02055ab8(arg0 + 0x34);
    func_02058d1c(arg0);
    return arg0;
}
