#include "m2c.h"

s16 func_02046e08();                                /* extern */
M2C_UNK func_02053114(M2C_UNK);                     /* extern */
M2C_UNK func_020537ec();                            /* extern */

void func_0201f0b4(void *arg0, M2C_UNK arg1) {
    func_02053114(arg1);
    func_020537ec();
    M2C_FIELD(arg0, s16 *, 0x34A6) = func_02046e08();
}
