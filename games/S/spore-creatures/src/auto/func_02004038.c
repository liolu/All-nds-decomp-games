#include "m2c.h"

M2C_UNK func_02004104(s32);                         /* extern */
M2C_UNK func_020042d8(s32);                         /* extern */
M2C_UNK func_0208acbc(s32);                         /* extern */

s32 func_02004038(s32 arg0) {
    func_020042d8(arg0 + 0x10);
    func_02004104(arg0 + 0x14);
    func_0208acbc(arg0 + 4);
    return arg0;
}
