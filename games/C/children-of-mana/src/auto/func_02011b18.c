/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201174c();                            /* extern */
M2C_UNK func_020119d4();                            /* extern */
extern s8 data_021153a0;

void func_02011b18(void) {
    s8 var_r1;

    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    data_021153a0 = var_r1;
    func_020119d4();
    func_0201174c();
}
