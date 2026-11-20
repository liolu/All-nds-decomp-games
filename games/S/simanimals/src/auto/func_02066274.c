#include "m2c.h"

M2C_UNK func_020639d4(void *, M2C_UNK);             /* extern */
extern void *data_020904e0;

s32 func_02066274(void) {
    func_020639d4(data_020904e0 + 4, 4);
    return M2C_FIELD(data_020904e0, s32 *, 4);
}
