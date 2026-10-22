/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004104();                            /* extern */

void func_02003058(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F4), u8 *, 0x86) == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x39C) = 0;
    func_02004104();
}
