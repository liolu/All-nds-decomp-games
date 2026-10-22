/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0203a6cc(M2C_UNK);                         /* extern */
M2C_UNK func_0204cc4c(s32, s32);                    /* extern */

void func_0204cd5c(void) {
    s32 temp_r0;

    temp_r0 = func_0203a6cc(0x44);
    if (temp_r0 == 0) {
        return;
    }
    func_0204cc4c(temp_r0, 0x66800);
}
