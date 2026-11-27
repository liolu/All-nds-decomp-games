/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207aa8c(void *);                      /* extern */
M2C_UNK func_0207aac8();                            /* extern */

void func_020efbc4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x7D) == 0) {
        return;
    }
    func_0207aac8(arg0);
    func_0207aa8c(arg0);
    M2C_FIELD(arg0, u8 *, 0x7D) = 0U;
}
