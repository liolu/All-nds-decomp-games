#include "m2c.h"

M2C_UNK func_ov000_020f8228(s32);                         /* extern */
M2C_UNK func_02098248(s32);                         /* extern */

s32 func_ov003_02147ee4(s32 arg0) {
    func_02098248(arg0 + 0x1B0);
    func_ov000_020f8228(arg0);
    return arg0;
}
