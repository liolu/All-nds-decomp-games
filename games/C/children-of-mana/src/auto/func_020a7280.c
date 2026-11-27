/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a8394();                            /* extern */

void func_020a7280(void *arg0, u8 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0x165) == arg1) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x165) = arg1;
    func_020a8394();
}
