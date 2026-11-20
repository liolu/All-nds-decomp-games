#include "m2c.h"

s8 func_02046c84();                                 /* extern */
M2C_UNK func_02053114(M2C_UNK);                     /* extern */
M2C_UNK func_020537ec();                            /* extern */

void func_0201eff8(void *arg0, M2C_UNK arg1) {
    func_02053114(arg1);
    func_020537ec();
    M2C_FIELD(arg0, s8 *, 0x34A3) = func_02046c84();
}
