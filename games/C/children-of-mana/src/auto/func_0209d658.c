/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209d8f8();                            /* extern */

void func_0209d658(void *arg0, u8 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0x25C) == arg1) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x25C) = arg1;
    func_0209d8f8();
}
