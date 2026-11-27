/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02092fc8(s32, M2C_UNK);                /* extern */

void func_0209300c(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_0200f270(0x230, 0);
    if (temp_r0 == 0) {
        return;
    }
    func_02092fc8(temp_r0, arg0);
}
