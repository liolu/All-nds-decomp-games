/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020edf98(void *);                          /* extern */
M2C_UNK func_020ee908(void *);                      /* extern */
M2C_UNK func_020ef04c();                            /* extern */

void func_020ee750(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;

    func_020ef04c();
    func_020ee908(arg0);
    if (func_020edf98(arg0) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 4);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x3C)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x18);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 0x3C)(temp_r0_2);
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 8);
    if (temp_r0_3 != NULL) {
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 0x18)(temp_r0_3);
    }
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0x10);
    if (temp_r0_4 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0_4, M2C_UNK(**)(), 8)(temp_r0_4);
}
