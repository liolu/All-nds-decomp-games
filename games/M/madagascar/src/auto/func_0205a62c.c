/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205a530(void *);                      /* extern */
M2C_UNK func_020650ec(u8);                          /* extern */
s32 func_020652dc();                                /* extern */

void func_0205a62c(void *arg0) {
    func_020650ec(M2C_FIELD(arg0, u8 *, 0x3C));
    func_0205a530(arg0);
    M2C_FIELD(arg0, s32 *, 0x30) = func_020652dc();
    M2C_FIELD(arg0, s8 *, 0x2C)  = 1;
}
