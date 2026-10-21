/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c8070();                            /* extern */
M2C_UNK func_020c8084();                            /* extern */

s32 func_020c7510(s32 arg0, void *arg1) {
    func_020c8070();
    func_020c8084();
    return M2C_FIELD(arg1, s32 *, -0x18) - 0x20;
}
