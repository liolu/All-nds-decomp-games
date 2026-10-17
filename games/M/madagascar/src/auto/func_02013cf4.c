/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02047734(void *);                      /* extern */

void func_02013cf4(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    if ((u32) M2C_FIELD(arg0, u16 *, 0x1F2) > (u32) M2C_FIELD(arg0, u16 *, 0x1EE)) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1E0) == 0) {
        temp_r0 = M2C_FIELD(arg0, void ***, 0x1C4);
        M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0x20)(temp_r0, 0);
    } else {
        temp_r0_2 = M2C_FIELD(arg0, void ***, 0x1C4);
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(void **, M2C_UNK), 0x20)(temp_r0_2, 1);
    }
    func_02047734(arg0);
}
