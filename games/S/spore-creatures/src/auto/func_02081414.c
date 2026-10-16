#include "m2c.h"

M2C_UNK func_020ae648(s32, M2C_UNK);                /* extern */
s32 func_02081448(s32 *);                           /* extern */

s32 func_02081414(s32 *arg0, s32 arg1) {
    func_020ae648(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_02081448(arg0) != 0) {
        return 1;
    }
    return 0;
}
