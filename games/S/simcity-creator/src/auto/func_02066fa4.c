#include "m2c.h"

M2C_UNK func_0206878c(void **);                     /* extern */

s32 func_02066fa4(void *arg0) {
    void **temp_r0;

    func_0206878c(M2C_FIELD(arg0, void ***, 0xC));
    temp_r0 = M2C_FIELD(arg0, void ***, 0xC);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    return 1;
}
