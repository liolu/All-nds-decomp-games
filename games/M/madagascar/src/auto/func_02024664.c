/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02024578(s32, M2C_UNK);                /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */

void func_02024664(void) {
    s32 temp_r0;

    temp_r0 = func_0207b068(0x40);
    if (temp_r0 == 0) {
        return;
    }
    func_02024578(temp_r0, 0x60000);
}
