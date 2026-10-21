/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c80ec();                            /* extern */
M2C_UNK func_020ce510(s32);                         /* extern */
M2C_UNK func_020d0824(M2C_UNK, M2C_UNK);            /* extern */

void func_020d0888(void) {
    s32 temp_r0;

    temp_r0 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if (temp_r0 != 0) {
        func_020ce510(temp_r0);
    }
    func_020d0824(1, 1);
    func_020c80ec();
}
