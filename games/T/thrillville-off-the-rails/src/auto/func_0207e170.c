#include "m2c.h"

M2C_UNK func_0200dc48(s32, M2C_UNK);                /* extern */
s32 func_0207e1a4(s32 *);                           /* extern */

s32 func_0207e170(s32 *arg0, s32 arg1) {
    func_0200dc48(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_0207e1a4(arg0) != 0) {
        return 1;
    }
    return 0;
}
