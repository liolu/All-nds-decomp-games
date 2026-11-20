#include "m2c.h"

s32 func_02070f50(s32);                             /* extern */
M2C_UNK func_02087494(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_020874b4(s32 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_02087400(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (func_02070f50(*arg0) != 0) {
        return 0;
    }
    func_02087494(arg0, arg1, arg2);
    func_020874b4(arg0, arg1, arg2, 0);
    return 1;
}
