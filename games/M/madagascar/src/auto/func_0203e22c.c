/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020242d4(s32, s32, M2C_UNK);           /* extern */
s32 func_02024654();                                /* extern */

void func_0203e22c(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x24C);
    if (temp_r4 == 0) {
        return;
    }
    func_020242d4(func_02024654(), temp_r4, 0);
}
