/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205b058(u8);                          /* extern */
s32 func_0205b248();                                /* extern */
M2C_UNK func_0205c504(void *);                      /* extern */

void func_0205c600(void *arg0) {
    func_0205b058(M2C_FIELD(arg0, u8 *, 0x3C));
    func_0205c504(arg0);
    M2C_FIELD(arg0, s32 *, 0x30) = func_0205b248();
    M2C_FIELD(arg0, s8 *, 0x2C)  = 1;
}
