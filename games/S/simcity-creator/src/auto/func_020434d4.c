#include "m2c.h"

M2C_UNK func_02043350(M2C_UNK);                     /* extern */
M2C_UNK func_020433b4();                            /* extern */
s32 func_0204350c();                                /* extern */

void func_020434d4(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_020433b4();
        func_02043350(9);
        return;
    }
    if (func_0204350c() != 0) {
        return;
    }
    func_02043350(9);
}
