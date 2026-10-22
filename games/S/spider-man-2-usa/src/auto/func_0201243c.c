/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02012204(s32);                         /* extern */
M2C_UNK func_02059f70(s32);                         /* extern */
extern s32 data_0215b3b8;

void func_0201243c(void) {
    s32 temp_r4;

    temp_r4 = data_0215b3b8;
    if (temp_r4 != 0) {
        func_02012204(temp_r4);
        func_02059f70(temp_r4);
    }
    data_0215b3b8 = 0;
}
