/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202dacc(s32);                         /* extern */
M2C_UNK func_0207b040(s32);                         /* extern */
extern s32 data_020d14c4;

void func_0202dd50(void) {
    s32 temp_r4;

    temp_r4 = data_020d14c4;
    if (temp_r4 != 0) {
        func_0202dacc(temp_r4);
        func_0207b040(temp_r4);
    }
    data_020d14c4 = 0;
}
