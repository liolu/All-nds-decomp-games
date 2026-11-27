/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4();                            /* extern */
s32 func_02078328(void **, M2C_UNK);                /* extern */

void func_020db1a8(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x14);
    if ((temp_r0 != NULL) && (func_02078328(temp_r0, 0) != 0)) {
        temp_r0_2 = M2C_FIELD(arg0, void ***, 0x14);
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(void **, M2C_UNK), 0x20)(temp_r0_2, 0);
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x18);
    if ((temp_r0_3 != NULL) && (func_02078328(temp_r0_3, 0) != 0)) {
        temp_r0_4 = M2C_FIELD(arg0, void ***, 0x18);
        M2C_FIELD(*temp_r0_4, M2C_UNK(**)(void **, M2C_UNK), 0x20)(temp_r0_4, 0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x30) == 0) {
        return;
    }
    func_0200f2c4();
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}
