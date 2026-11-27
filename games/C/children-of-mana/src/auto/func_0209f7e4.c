/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209f1e8(void *);                      /* extern */

void func_0209f7e4(void *arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x104);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x14)(temp_r0);
    }
    func_0209f1e8(arg0);
}
