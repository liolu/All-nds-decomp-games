/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a00a4(void *);                      /* extern */

void func_020c4334(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, void ***, 0xC0);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x18)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0xC8);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 8)(temp_r0_2);
    }
    func_020a00a4(arg0);
}
