#include "m2c.h"

M2C_UNK func_0208f740();                            /* extern */
M2C_UNK func_0208f7b4();                            /* extern */
void *func_02090a40();                              /* extern */

void func_0208cf5c(M2C_UNK arg0) {
    if (M2C_FIELD(func_02090a40(), u8 *, 0x15) == 0) {
        func_0208f7b4(arg0);
        return;
    }
    func_0208f740(arg0);
}
