/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02066304(void *, M2C_UNK);             /* extern */
extern void *data_020e81e0;

s32 func_020690e0(void) {
    func_02066304(data_020e81e0 + 4, 4);
    return M2C_FIELD(data_020e81e0, s32 *, 4);
}
