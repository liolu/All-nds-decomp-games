#include "m2c.h"

M2C_UNK func_020060f4();                            /* extern */
M2C_UNK func_0201cbf4(u8 *);                        /* extern */

s32 func_0201cbc4(u8 *arg0) {
    if (*arg0 != 0) {
        return 0;
    }
    func_020060f4();
    func_0201cbf4(arg0);
    *arg0 = 1;
    return 1;
}
