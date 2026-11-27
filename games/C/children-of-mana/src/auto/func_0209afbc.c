/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_0207b218(s32);                         /* extern */
M2C_UNK func_02099648(void *);                      /* extern */
M2C_UNK func_020a3e78(void *);                      /* extern */

void func_0209afbc(void *arg0) {
    s32 temp_r5;
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;

    if (M2C_FIELD(arg0, u8 *, 0x9B) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x108);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0xC)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x108) = NULL;
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x10C);
    if (temp_r0_2 != NULL) {
        if (temp_r0_2 != NULL) {
            M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 0xC)(temp_r0_2);
        }
        M2C_FIELD(arg0, void ***, 0x10C) = NULL;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x110);
    if (temp_r5 != 0) {
        if (temp_r5 != 0) {
            func_0207b218(temp_r5);
            func_0200f2c4(temp_r5);
        }
        M2C_FIELD(arg0, s32 *, 0x110) = 0;
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x114);
    if (temp_r0_3 != NULL) {
        if (temp_r0_3 != NULL) {
            M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 0x38)(temp_r0_3);
        }
        M2C_FIELD(arg0, void ***, 0x114) = NULL;
    }
    func_020a3e78(arg0 + 0x118);
    func_02099648(arg0);
}
