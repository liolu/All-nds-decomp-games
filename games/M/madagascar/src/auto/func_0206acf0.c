/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02063d74();                            /* extern */
M2C_UNK func_02068b84(s32);                         /* extern */
M2C_UNK func_0206ac8c(M2C_UNK, M2C_UNK);            /* extern */

void func_0206acf0(void) {
    s32 temp_r0;

    temp_r0 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if (temp_r0 != 0) {
        func_02068b84(temp_r0);
    }
    func_0206ac8c(1, 1);
    func_02063d74();
}
