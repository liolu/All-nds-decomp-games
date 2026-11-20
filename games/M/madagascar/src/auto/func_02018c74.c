/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02001dec();                /* extern */
M2C_UNK func_02018c1c();                      /* extern */

void *func_02018c74(void *arg0, s32 arg1, s32 arg2) {
    func_02001dec(arg0 + 0x104, 0x10);
    M2C_FIELD(arg0, s32 *, 0x110) = arg1;
    M2C_FIELD(arg0, s32 *, 0x114) = arg2;
    func_02018c1c(arg0);
    return arg0;
}
