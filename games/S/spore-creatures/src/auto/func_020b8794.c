#include "m2c.h"

M2C_UNK func_020b5b88(void *, M2C_UNK);             /* extern */
extern void *data_020f3880;

s32 func_020b8794(void) {
    func_020b5b88(data_020f3880 + 4, 4);
    return M2C_FIELD(data_020f3880, s32 *, 4);
}
