/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02070dc0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0206ac0c();                            /* extern */
M2C_UNK func_0206f57c(s32);                         /* extern */

void func_02070e24(void) {
    s32 temp_r0;

    temp_r0 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if (temp_r0 != 0) {
        func_0206f57c(temp_r0);
    }
    func_02070dc0(1, 1);
    func_0206ac0c();
}
