/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ba858();                            /* extern */
M2C_UNK func_020ba97c();                            /* extern */

void func_020bab90(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xC) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s8 *, 0x166) == 2) {
        func_020ba858(arg0);
        return;
    }
    func_020ba97c(arg0);
}
