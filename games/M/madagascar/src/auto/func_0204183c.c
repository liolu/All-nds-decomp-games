/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203dfb4();                            /* extern */

void func_0204183c(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if ((temp_r1 == 0) || (temp_r1 == 1) || (temp_r1 == 5)) {
        M2C_FIELD(arg0, s8 *, 0x258) = 1;
    }
    func_0203dfb4();
}
