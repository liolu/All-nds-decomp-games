/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_02020c94(void *);                      /* extern */
M2C_UNK func_0207aefc();                            /* extern */
M2C_UNK func_0207b218(s32);                         /* extern */

void func_02080c10(void *arg0) {
    s32 temp_r4;
    void **temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x3B4) != 0) {
        func_0207aefc();
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x3B4);
        if (temp_r4 != 0) {
            if (temp_r4 != 0) {
                func_0207b218(temp_r4);
                func_0200f2c4(temp_r4);
            }
            M2C_FIELD(arg0, s32 *, 0x3B4) = 0;
        }
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x440);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x440) = NULL;
    }
    func_02020c94(arg0);
}
