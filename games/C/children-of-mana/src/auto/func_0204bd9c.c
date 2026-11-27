/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020114e4();                            /* extern */
s32 func_02013d0c();                                /* extern */
M2C_UNK func_0207ab04();                         /* extern */
M2C_UNK func_0207abf4();                         /* extern */
M2C_UNK func_020d4b0c();                         /* extern */
M2C_UNK func_020e26c0();                            /* extern */

void func_0204bd9c(void *arg0) {
    func_0207abf4(arg0 + 0x18);
    func_0207ab04(arg0 + 0x18);
    func_020d4b0c(arg0 + 0x78);
    func_020e26c0();
    func_020114e4();
    M2C_FIELD(arg0, s32 *, 0x108) = func_02013d0c();
    M2C_FIELD(arg0, s8 *, 0x120)  = 1;
}
