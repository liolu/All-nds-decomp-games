#include "m2c.h"

M2C_UNK func_02004104(s32);                         /* extern */
M2C_UNK func_020042d8(s32);                         /* extern */

s32 func_ov000_02103e38(s32 arg0) {
    func_020042d8(arg0 + 0x1C);
    func_02004104(arg0 + 0x20);
    return arg0;
}
