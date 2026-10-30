#include "m2c.h"

M2C_UNK func_0200bbf8();                            /* extern */
M2C_UNK func_0201ccc4(u8 *);                        /* extern */

s32 func_0201cc38(u8 *arg0) {
    if (*arg0 != 0) {
        return 0;
    }
    func_0200bbf8();
    func_0201ccc4(arg0);
    *arg0 = 1;
    return 1;
}
