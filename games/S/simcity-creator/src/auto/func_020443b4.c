#include "m2c.h"

M2C_UNK func_020433b4(u16);                         /* extern */
M2C_UNK func_02043350(M2C_UNK);                     /* extern */

void func_020443b4(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_02043350(9);
        func_020433b4(M2C_FIELD(arg0, u16 *, 2));
        return;
    }
    func_02043350(1);
}
