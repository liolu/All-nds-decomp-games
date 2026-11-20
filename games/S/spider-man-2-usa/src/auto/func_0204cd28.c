/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204cc10(s32);                         /* extern */
M2C_UNK func_02059f70(s32);                         /* extern */
extern s32 data_02160664;

void func_0204cd28(void) {
    s32 temp_r4;

    temp_r4 = data_02160664;
    if (temp_r4 == 0) {
        return;
    }
    func_0204cc10(temp_r4);
    func_02059f70(temp_r4);
}
