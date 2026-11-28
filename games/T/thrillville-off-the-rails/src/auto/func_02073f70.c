#include "m2c.h"

M2C_UNK func_02073fec(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_020741ac();                            /* extern */

s32 *func_02073f70(s32 *arg0, M2C_UNK arg1) {
    if (*arg0 != 0) {
        func_020741ac(arg0);
    }
    func_02073fec(arg0, arg1);
    return arg0;
}
