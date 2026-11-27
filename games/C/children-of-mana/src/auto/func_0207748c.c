/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4();                            /* extern */
M2C_UNK func_0201006c(s16);                         /* extern */

void func_0207748c(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 == 0) {
        return;
    }
    if (temp_r0 != 0) {
        func_0200f2c4();
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    func_0201006c(M2C_FIELD(arg0, s16 *, 0x14));
}
