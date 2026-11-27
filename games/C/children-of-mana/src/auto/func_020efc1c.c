/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207aa44(void *);                      /* extern */
M2C_UNK func_0207aa74(void *);                      /* extern */
M2C_UNK func_0207aa80();                            /* extern */

void func_020efc1c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x7C) == 0) {
        return;
    }
    func_0207aa80(arg0);
    func_0207aa74(arg0);
    func_0207aa44(arg0);
    M2C_FIELD(arg0, u8 *, 0x7C) = 0U;
}
