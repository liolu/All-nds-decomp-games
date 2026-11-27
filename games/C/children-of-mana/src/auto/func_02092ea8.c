/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s16 func_020407d8();           /* extern */
M2C_UNK func_02041c08();                            /* extern */

void func_02092ea8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02041c08();
    M2C_FIELD(arg0, s16 *, 0x220) = func_020407d8(arg1, arg0 + 0x214, arg2);
}
