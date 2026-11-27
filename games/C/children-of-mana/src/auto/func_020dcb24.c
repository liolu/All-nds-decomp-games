/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207b2f4(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
s32 func_0207c9fc();                                /* extern */
s32 func_02095e78(s32);                             /* extern */
s32 func_020d0c04();                                /* extern */
extern s32 data_0212e820;

void func_020dcb24(void) {
    s32 temp_r4;

    if (data_0212e820 == 0) {
        return;
    }
    if (func_0207c9fc() == 0) {
        return;
    }
    temp_r4 = func_02095e78(0);
    func_0207b2f4(data_0212e820, 0xF0, 0, 0, 0, func_020d0c04(), 0, 0x1F);
    func_02095e78(temp_r4);
}
