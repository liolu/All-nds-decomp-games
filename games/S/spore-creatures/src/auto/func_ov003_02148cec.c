#include "m2c.h"

M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_020a0904(s32);                         /* extern */
M2C_UNK func_ov000_020f8228(s32);                         /* extern */
M2C_UNK func_02035fac(s32);                         /* extern */
M2C_UNK func_ov003_02148778(s32);                         /* extern */

s32 func_ov003_02148cec(s32 arg0) {
    func_020a0904(arg0 + 0x268);
    func_02035fac(arg0 + 0x1F4);
    func_ov000_020f8228(arg0 + 0x44);
    func_ov003_02148778(arg0);
    func_020934a8(arg0);
    return arg0;
}
