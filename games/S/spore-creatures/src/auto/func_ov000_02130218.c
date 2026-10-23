#include "m2c.h"

M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_02091394(s32);                         /* extern */
M2C_UNK func_0208acbc(s32);                         /* extern */

s32 func_ov000_02130218(s32 arg0) {
    func_02091394(arg0 + 0x20);
    func_0208acbc(arg0 + 0x4);
    func_020934a8(arg0);
    return arg0;
}
