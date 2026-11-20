#include "m2c.h"

M2C_UNK func_02005aac(void *, M2C_UNK);             /* extern */
extern void *data_021497e0;

s32 func_02008774(void) {
    func_02005aac(data_021497e0 + 4, 4);
    return M2C_FIELD(data_021497e0, s32 *, 4);
}
