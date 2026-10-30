#include "m2c.h"

M2C_UNK func_020ae588(void *, s32);                 /* extern */
s32 func_020ae60c();                                /* extern */

s32 func_020ae550(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA0) < 0) {
        return;
    }
    if (func_020ae60c() != 0) {
        return;
    }
    func_020ae588(arg0, M2C_FIELD(arg0, s32 *, 0xA0));
    return M2C_FIELD(arg0, s32 *, 0xA0) = -1;
}
