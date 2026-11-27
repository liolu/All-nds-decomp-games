/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
s16 func_0200ff08(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020776f8(void *);                      /* extern */

void func_02077594(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s32 *, 8)    = func_0200f270(0x10, 0);
    M2C_FIELD(arg0, s16 *, 0x16) = func_0200ff08(arg1, 1, 0, 4);
    func_020776f8(arg0);
}
