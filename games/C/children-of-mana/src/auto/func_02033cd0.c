/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020114e4();                                /* extern */
M2C_UNK func_02013e98(s32, s32);                    /* extern */

void func_02033cd0(void *arg0) {
    s32 temp_r4;
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x28);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x38)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x28) = NULL;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_r4 == 0) {
        return;
    }
    func_02013e98(func_020114e4(), temp_r4);
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
}
