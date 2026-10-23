#include "m2c.h"

M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_0204ea7c(s32);                         /* extern */
M2C_UNK func_0208acbc(s32);                         /* extern */

s32 func_ov003_0213b168(s32 arg0) {
    func_0204ea7c(arg0 + 0xC);
    func_0208acbc(arg0 + 0x4);
    func_020934a8(arg0);
    return arg0;
}
