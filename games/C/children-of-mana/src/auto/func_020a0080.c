/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02093b70();                            /* extern */

s32 func_020a0080(void *arg0) {
    func_02093b70();
    M2C_FIELD(arg0, s32 *, 0x38) = 3;
    return 1;
}
