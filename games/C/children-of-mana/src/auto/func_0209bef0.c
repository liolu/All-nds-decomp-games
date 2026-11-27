/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_0207b218(s32);                         /* extern */
M2C_UNK func_02099648(void *);                      /* extern */

void func_0209bef0(void *arg0) {
    s32 temp_r5;
    void **temp_r0;
    void **temp_r0_2;

    if (M2C_FIELD(arg0, u8 *, 0x9B) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0xFC);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0xC)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0xFC) = NULL;
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x100);
    if (temp_r0_2 != NULL) {
        if (temp_r0_2 != NULL) {
            M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
        }
        M2C_FIELD(arg0, void ***, 0x100) = NULL;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x104);
    if (temp_r5 != 0) {
        if (temp_r5 != 0) {
            func_0207b218(temp_r5);
            func_0200f2c4(temp_r5);
        }
        M2C_FIELD(arg0, s32 *, 0x104) = 0;
    }
    func_02099648(arg0);
}
