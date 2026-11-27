/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209d3cc(void *);                      /* extern */

void func_020a6d34(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x19C);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 8)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x194);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 8)(temp_r0_2);
    }
    func_0209d3cc(arg0);
}
