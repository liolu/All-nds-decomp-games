/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020af550();                            /* extern */
M2C_UNK func_020b2a78(void *, M2C_UNK);             /* extern */

void func_020af518(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    if (M2C_FIELD(arg0, u8 *, 0xFC) != 0) {
        func_020b2a78(arg0, arg3);
        return;
    }
    func_020af550(arg0, arg1, arg2);
}
