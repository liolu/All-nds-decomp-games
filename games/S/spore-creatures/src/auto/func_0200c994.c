#include "m2c.h"

M2C_UNK func_0200c9b4();                            /* extern */
M2C_UNK func_0200cc5c();                            /* extern */

void func_0200c994(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xE0) != 0) {
        func_0200cc5c(arg0);
        return;
    }
    func_0200c9b4(arg0);
}
