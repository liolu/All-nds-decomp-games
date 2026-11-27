/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c7a64();                            /* extern */

void func_020ac640(void *arg0) {
    void **temp_r0;

    if (M2C_FIELD(arg0, void ***, 0xBC) != NULL) {
        func_020c7a64();
        temp_r0 = M2C_FIELD(arg0, void ***, 0xBC);
        if (temp_r0 != NULL) {
            if (temp_r0 != NULL) {
                M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
            }
            M2C_FIELD(arg0, void ***, 0xBC) = NULL;
        }
    }
    M2C_FIELD(arg0, s8 *, 0x1D1) = -1;
    M2C_FIELD(arg0, s8 *, 0x1D0) = (s8) M2C_FIELD(arg0, s8 *, 0x1D1);
}
