#include "m2c.h"

M2C_UNK func_020042d8();                            /* extern */

s32 func_020043bc(s32 *arg0) {
    if (*arg0 == 0) {
        return;
    }
    func_020042d8();
    return *arg0 = 0;
}
