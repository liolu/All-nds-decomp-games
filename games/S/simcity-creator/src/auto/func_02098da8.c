#include "m2c.h"

M2C_UNK func_020b132c();                            /* extern */

s32 func_02098da8(s32 arg0, void *arg1) {
    func_020b132c();
    if (M2C_FIELD(arg1, s32 *, 0x18) == 4) {
        return 1;
    }
    return 0;
}
