/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_02010220();                            /* extern */
M2C_UNK func_0207b218(s32);                         /* extern */
extern s32 data_0212e820;

void func_020dcbac(void) {
    s32 temp_r4;

    temp_r4 = data_0212e820;
    if (temp_r4 != 0) {
        if (temp_r4 != 0) {
            func_0207b218(temp_r4);
            func_0200f2c4(temp_r4);
        }
        data_0212e820 = 0;
    }
    func_02010220();
}
