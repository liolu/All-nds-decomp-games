/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020405ec();                            /* extern */

void func_0207aa44(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x5F) & 1)) {
        return;
    }
    func_020405ec(arg0);
    M2C_FIELD(arg0, u8 *, 0x5F) = (u8) (M2C_FIELD(arg0, u8 *, 0x5F) & ~1);
}
