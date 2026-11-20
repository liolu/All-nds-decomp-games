/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020023e4();                            /* extern */

void func_020220b8(void *arg0) {
    void **temp_r0;

    func_020023e4();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x2D8);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0xC)(temp_r0);
}
