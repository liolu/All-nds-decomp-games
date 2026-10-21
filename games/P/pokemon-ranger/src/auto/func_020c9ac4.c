/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c6fb0(void *, M2C_UNK);             /* extern */
extern void *data_020f8840;

s32 func_020c9ac4(void) {
    func_020c6fb0(data_020f8840 + 4, 4);
    return M2C_FIELD(data_020f8840, s32 *, 4);
}
