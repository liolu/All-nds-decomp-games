/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010220();                            /* extern */

void func_020e8e98(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x10);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x10) = NULL;
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x2C);
    if (temp_r0_2 != NULL) {
        if (temp_r0_2 != NULL) {
            M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
        }
        M2C_FIELD(arg0, void ***, 0x2C) = NULL;
    }
    func_02010220();
    M2C_FIELD(arg0, s8 *, 0x40) = 0;
}
