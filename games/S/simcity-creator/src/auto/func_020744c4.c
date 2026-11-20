#include "m2c.h"

M2C_UNK func_020744fc(s32, M2C_UNK);                /* extern */

s32 func_020744c4(s32 arg0, u32 arg1, M2C_UNK arg2) {
    if (arg1 >= 0x122U) {
        return 0;
    }
    func_020744fc((arg1 * 0x52) + (arg0 + 0x16B0), arg2);
    return 1;
}
