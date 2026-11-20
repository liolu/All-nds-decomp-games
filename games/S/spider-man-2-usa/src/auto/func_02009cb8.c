/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02006ac0(void *, M2C_UNK);             /* extern */
M2C_UNK func_02008c0c(void *, s32);                 /* extern */

void func_02009cb8(void *arg0) {
    func_02006ac0(arg0, 0);
    func_02008c0c(arg0, M2C_FIELD(arg0, s32 *, 0x378));
}
