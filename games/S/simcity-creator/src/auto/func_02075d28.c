#include "m2c.h"

M2C_UNK func_02075dd4(void *);                      /* extern */
M2C_UNK func_02075e14();                            /* extern */

s32 func_02075d28(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 5) == 0) {
        return 0;
    }
    func_02075e14(arg0);
    func_02075dd4(arg0);
    M2C_FIELD(arg0, u8 *, 5) = 0U;
    return 1;
}
