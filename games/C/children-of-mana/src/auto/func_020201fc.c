/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010b2c(void *, s32);                 /* extern */
s32 func_0201e150();                                /* extern */

void func_020201fc(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x220) == 0) {
        return;
    }
    func_02010b2c(arg0 + 0x40, func_0201e150());
}
