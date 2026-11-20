#include "m2c.h"

M2C_UNK func_020169a8();                            /* extern */
M2C_UNK func_02019f88();                            /* extern */
M2C_UNK func_02020fe4(s32);                         /* extern */
M2C_UNK func_02026404(M2C_UNK, M2C_UNK);            /* extern */

void func_0202637c(void) {
    s32 temp_r0;

    temp_r0 = (s32) (*(u16 *) 0x02FFFFA8 & 0x8000) >> 0xF;
    if (temp_r0 != 0) {
        func_02020fe4(temp_r0);
    }
    func_02026404(1, 1);
    func_020169a8();
    func_02019f88();
}
