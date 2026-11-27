/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02051cbc(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0205c9c4();                            /* extern */
M2C_UNK func_0205dea4(s32);                         /* extern */

void func_02051d20(void) {
    s32 temp_r0;

    temp_r0 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if (temp_r0 != 0) {
        func_0205dea4(temp_r0);
    }
    func_02051cbc(1, 1);
    func_0205c9c4();
}
