/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020023a0();                            /* extern */

void func_0200bae4(void *arg0, s32 *arg1) {
    if (*arg1 == 0x19) {
        M2C_FIELD(arg0, s8 *, 0x44) = 1;
        return;
    }
    func_020023a0(arg0, arg1);
}
