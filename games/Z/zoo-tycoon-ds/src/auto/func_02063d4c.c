/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02063c50(void *);                      /* extern */
M2C_UNK func_0206b9d4(u8);                          /* extern */
s32 func_0206bc98();                                /* extern */

void func_02063d4c(void *arg0) {
    func_0206b9d4(M2C_FIELD(arg0, u8 *, 0x3C));
    func_02063c50(arg0);
    M2C_FIELD(arg0, s32 *, 0x30) = func_0206bc98();
    M2C_FIELD(arg0, s8 *, 0x2C)  = 1;
}
