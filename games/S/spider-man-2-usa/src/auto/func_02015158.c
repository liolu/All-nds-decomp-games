/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203b8fc(s32);                         /* extern */
M2C_UNK func_02059f70(s32);                         /* extern */

void *func_02015158(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_r4 != 0) {
        func_0203b8fc(temp_r4);
        func_02059f70(temp_r4);
    }
    return arg0;
}
