/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209f238(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_0209f814(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x104);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x10)(temp_r0);
    }
    func_0209f238(arg0, arg1, arg2);
}
