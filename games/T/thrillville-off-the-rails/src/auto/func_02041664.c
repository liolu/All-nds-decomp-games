#include "m2c.h"

M2C_UNK func_0202e95c(void *);                      /* extern */
extern M2C_UNK data_020e0664;

void *func_02041664(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e0664;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x10);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_0202e95c(arg0 + 0xC);
    return arg0;
}
