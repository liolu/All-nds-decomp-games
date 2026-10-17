/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02012b04(s32);                         /* extern */
M2C_UNK func_0207b040(s32);                         /* extern */
extern s32 data_020d0220;

void func_02012a48(void) {
    s32 temp_r4;

    temp_r4 = data_020d0220;
    if (temp_r4 != 0) {
        func_02012b04(temp_r4);
        func_0207b040(temp_r4);
    }
    data_020d0220 = 0;
}
