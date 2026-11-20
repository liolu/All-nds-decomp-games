/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201b7ec();                            /* extern */
M2C_UNK func_02035a0c(void *, s32, M2C_UNK);        /* extern */

void func_020364ec(void *arg0, s32 arg1) {
    func_0201b7ec();
    if (arg1 != 0) {
        func_02035a0c(arg0 + 0x138, M2C_FIELD(M2C_FIELD(arg0, void **, 0x170), s32 *, 0), 0);
        return;
    }
    func_02035a0c(arg0 + 0x138, M2C_FIELD(M2C_FIELD(arg0, void **, 0x170), s32 *, 4), 0);
}
