/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_0208ff44();                            /* extern */
M2C_UNK func_0209009c(s32);                         /* extern */

void func_020f2cd0(void *arg0) {
    s32 temp_r4;

    if (M2C_FIELD(arg0, s32 *, 0x508) == 0) {
        return;
    }
    func_0208ff44();
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x508);
    if (temp_r4 == 0) {
        return;
    }
    if (temp_r4 != 0) {
        func_0209009c(temp_r4);
        func_0200f2c4(temp_r4);
    }
    M2C_FIELD(arg0, s32 *, 0x508) = 0;
}
