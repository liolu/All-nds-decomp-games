/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_0207b218(s32);                         /* extern */
M2C_UNK func_02099648(void *);                      /* extern */
M2C_UNK func_020a3e78(void *);                      /* extern */

void func_020e9d60(void *arg0) {
    s32 temp_r4;
    void **temp_r0;

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
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x10C);
    if (temp_r4 != 0) {
        if (temp_r4 != 0) {
            func_0207b218(temp_r4);
            func_0200f2c4(temp_r4);
        }
        M2C_FIELD(arg0, s32 *, 0x10C) = 0;
    }
    func_020a3e78(arg0 + 0x110);
    func_02099648(arg0);
}
