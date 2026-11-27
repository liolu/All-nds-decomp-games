/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02098690(void *);                      /* extern */

void func_0209bea8(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, void ***, 0xFC);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x18)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x100);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 8)(temp_r0_2);
    }
    func_02098690(arg0);
}
