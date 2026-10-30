#include "m2c.h"

s16 func_02046cbc();                                /* extern */
M2C_UNK func_02053114(M2C_UNK);                     /* extern */
M2C_UNK func_020537ec();                            /* extern */

void func_0201f040(void *arg0, M2C_UNK arg1) {
    func_02053114(arg1);
    func_020537ec();
    M2C_FIELD(arg0, s16 *, 0x34A4) = func_02046cbc();
}
