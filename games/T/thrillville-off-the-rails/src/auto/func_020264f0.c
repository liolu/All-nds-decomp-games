/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02022e10(void *, M2C_UNK);             /* extern */
extern void *data_020ee2e0;

s32 func_020264f0(void) {
    func_02022e10(data_020ee2e0 + 4, 4);
    return M2C_FIELD(data_020ee2e0, s32 *, 4);
}
