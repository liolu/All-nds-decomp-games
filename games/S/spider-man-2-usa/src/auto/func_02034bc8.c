/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020115ac(s32, M2C_UNK);                /* extern */
M2C_UNK func_0203b080();                            /* extern */

void func_02034bc8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x38) != 0) {
        return;
    }
    func_0203b080();
    func_020115ac(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 0x20), 0);
}
