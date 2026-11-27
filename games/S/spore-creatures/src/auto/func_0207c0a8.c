#include "m2c.h"

M2C_UNK func_020934a8(void *);                      /* extern */
extern M2C_UNK data_020dfb14;

void *func_0207c0a8(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020dfb14;
    temp_r0                        = M2C_FIELD(arg0, void ***, 8);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg0, void ***, 8) = NULL;
    func_020934a8(arg0);
    return arg0;
}
