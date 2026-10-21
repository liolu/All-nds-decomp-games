#include "m2c.h"

M2C_UNK func_020bac18(s32, M2C_UNK, s32);           /* extern */
s32 func_020bd268(s32, M2C_UNK, s32, s32 *);        /* extern */
s32 func_020bd35c(s32);                             /* extern */

s32 func_020bd3a4(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 sp0;

    if (func_020bd268(arg0, 0, arg2 + 7, &sp0) == 0) {
        return 0;
    }
    if (sp0 != 0) {
        return 1;
    }
    func_020bac18(arg0 + 0x50, arg1, arg2);
    if (func_020bd35c(arg0) != 0) {
        return 1;
    }
    return 0;
}
