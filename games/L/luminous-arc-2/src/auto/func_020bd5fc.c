#include "m2c.h"

M2C_UNK func_020bac18(void *, M2C_UNK, s32);        /* extern */
s32 func_020bd268(void *, M2C_UNK, s32, s32 *);     /* extern */
s32 func_020bd35c(void *);                          /* extern */

s32 func_020bd5fc(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 sp0;

    if (func_020bd268(arg0, 5, arg2 + 7 + M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x44), &sp0) == 0) {
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
