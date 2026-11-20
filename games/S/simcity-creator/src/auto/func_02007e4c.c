#include "m2c.h"

M2C_UNK func_0200558c(void *, M2C_UNK);             /* extern */
extern void *data_020d2b40;

s32 func_02007e4c(void) {
    func_0200558c(data_020d2b40 + 4, 4);
    return M2C_FIELD(data_020d2b40, s32 *, 4);
}
