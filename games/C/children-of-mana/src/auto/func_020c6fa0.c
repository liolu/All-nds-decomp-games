/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_02028b1c(s32);                         /* extern */
M2C_UNK func_0203cfd8(s32, M2C_UNK);                /* extern */
M2C_UNK func_020a3e78(void *);                      /* extern */
M2C_UNK func_020a96a4(s32);                         /* extern */

void func_020c6fa0(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    void **temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x164) == 0) {
        return;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r5 != 0) {
        if (temp_r5 != 0) {
            func_02028b1c(temp_r5);
            func_0200f2c4(temp_r5);
        }
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x10);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0xC)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x10) = NULL;
    }
    func_020a3e78(arg0 + 0x14);
    temp_r5_2 = M2C_FIELD(arg0, s32 *, 0x150);
    if (temp_r5_2 != 0) {
        if (temp_r5_2 != 0) {
            func_020a96a4(temp_r5_2);
            func_0200f2c4(temp_r5_2);
        }
        M2C_FIELD(arg0, s32 *, 0x150) = 0;
    }
    func_0203cfd8(M2C_FIELD(arg0, s32 *, 8), 0x1F);
    M2C_FIELD(arg0, u8 *, 0x164) = 0U;
}
