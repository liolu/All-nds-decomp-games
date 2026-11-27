/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s16 func_02040890();                    /* extern */
M2C_UNK func_0207a9dc();             /* extern */
M2C_UNK func_0207aa20();                      /* extern */

void func_0207ae1c(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s16 *, 0x18) = func_02040890(arg1, arg0 + 0xC);
    func_0207aa20(arg0);
    func_0207a9dc(arg0, 0);
    M2C_FIELD(arg0, u8 *, 0x5F) = (u8) (M2C_FIELD(arg0, u8 *, 0x5F) | 1);
}
