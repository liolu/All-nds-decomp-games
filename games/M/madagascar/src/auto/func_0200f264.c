/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02017bc4();                 /* extern */
M2C_UNK func_020647a0();           /* extern */

void func_0200f264(void *arg0, M2C_UNK arg1, s32 *arg2) {
    func_020647a0(arg1, arg0 + 0x10, *arg2);
    func_02017bc4(M2C_FIELD(arg0, s32 *, 4), arg0 + 0x10);
}
