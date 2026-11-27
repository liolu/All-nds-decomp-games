/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_0207b218(s32);                         /* extern */
extern M2C_UNK data_0210bad0;

void *func_020d2e6c(void *arg0) {
    s32 temp_r5;
    void **temp_r0;
    void **temp_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210bad0;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0xC);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0xC)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0xC) = NULL;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_r5 != 0) {
        if (temp_r5 != 0) {
            func_0207b218(temp_r5);
            func_0200f2c4(temp_r5);
        }
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x14);
    if (temp_r0_2 != NULL) {
        if (temp_r0_2 != NULL) {
            M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
        }
        M2C_FIELD(arg0, void ***, 0x14) = NULL;
    }
    return arg0;
}
