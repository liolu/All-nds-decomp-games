/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020eda48();                            /* extern */

void func_020ed9c0(void *arg0, s32 arg1) {
    void **temp_r0;

    M2C_FIELD(arg0, s32 *, 4) = arg1;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        return;
    }
    func_020eda48(arg0);
    M2C_FIELD(arg0, s32 *, 8) = 1;
    temp_r0                   = M2C_FIELD(arg0, void ***, 0x10);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0xA8)(temp_r0, 0);
}
