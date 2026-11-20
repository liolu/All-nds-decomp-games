#include "m2c.h"

u8 func_02077d04(s32 arg0, s32 arg1) {
    if (arg1 >= 0x13) {
        return 0U;
    }
    return M2C_FIELD((arg0 + arg1), u8 *, 0x28);
}
