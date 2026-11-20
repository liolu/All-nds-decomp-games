/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02025dd4();                            /* extern */

void func_02026324(void *arg0) {
    func_02025dd4();
    if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {
        M2C_FIELD(arg0, s8 *, 0x24) = 0;
    }
}
