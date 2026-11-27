#include "m2c.h"

M2C_UNK func_02004104(s32);                         /* extern */
M2C_UNK func_020042d8(s32);                         /* extern */
M2C_UNK func_020046f4(s32);                         /* extern */
M2C_UNK func_02014b38(s32);                         /* extern */
M2C_UNK func_020564e8(s32);                         /* extern */
M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_ov000_02103ec4(s32);                   /* extern */

s32 func_02043814(s32 arg0) {
    func_02014b38(arg0 + 0x188);
    func_02014b38(arg0 + 0x168);
    func_020042d8(arg0 + 0x13C);
    func_02004104(arg0 + 0x140);
    func_020046f4(arg0 + 0x124);
    func_ov000_02103ec4(arg0 + 0xB0);
    func_020564e8(arg0);
    func_020934a8(arg0);
    return arg0;
}
