#include "m2c.h"

M2C_UNK func_02006310();                            /* extern */

s32 func_0201cb64(u8 *arg0) {
    if (*arg0 != 0) {
        return 0;
    }
    func_02006310();
    *arg0 = 1;
    return 1;
}
