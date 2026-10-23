#include "m2c.h"

M2C_UNK func_020934a8(s32);                         /* extern */
M2C_UNK func_0208acbc(s32);                         /* extern */

s32 func_ov003_0213fe28(s32 arg0) {
    func_0208acbc(arg0 + 4);
    func_020934a8(arg0);
    return arg0;
}
