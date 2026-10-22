/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02017564();                /* extern */
M2C_UNK func_020204c4();                      /* extern */

void *func_02020540(void *arg0, s32 arg1) {
    func_02017564(arg0 + 0x104, 0x10);
    M2C_FIELD(arg0, s32 *, 0x110) = arg1;
    func_020204c4(arg0);
    return arg0;
}
