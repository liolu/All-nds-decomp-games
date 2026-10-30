#include "m2c.h"

s8 func_02046b98();                                 /* extern */
M2C_UNK func_02053114(M2C_UNK);                     /* extern */
M2C_UNK func_020537ec();                            /* extern */

void func_0201efb0(void *arg0, M2C_UNK arg1) {
    func_02053114(arg1);
    func_020537ec();
    M2C_FIELD(arg0, s8 *, 0x34A1) = func_02046b98();
}
