#include "m2c.h"

M2C_UNK func_020b4c50(void **);                     /* extern */

void func_02053590(void *arg0) {
    void **temp_r0;

    func_020b4c50(M2C_FIELD(arg0, void ***, 0xBB6C));
    temp_r0 = M2C_FIELD(arg0, void ***, 0xBB6C);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
}
