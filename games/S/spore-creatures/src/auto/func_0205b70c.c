#include "m2c.h"

s32 func_02022eb0(M2C_UNK);                         /* extern */

s32 func_0205b70c(s32 arg0, M2C_UNK arg1) {
    return M2C_FIELD(((func_02022eb0(arg1) * 0xC) + arg0), s32 *, 0xC0);
}
