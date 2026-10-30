#include "m2c.h"

M2C_UNK func_ov012_02163ac8(void **);               /* extern */

void func_0206e7f0(void *arg0) {
    void **temp_r0;

    func_ov012_02163ac8(M2C_FIELD(arg0, void ***, 8));
    temp_r0 = M2C_FIELD(arg0, void ***, 8);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
}
