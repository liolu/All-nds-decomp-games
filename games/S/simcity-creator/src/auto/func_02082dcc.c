#include "m2c.h"

M2C_UNK func_0203491c(void *);                      /* extern */
M2C_UNK func_0207b61c(void *);                      /* extern */
extern M2C_UNK data_020ce97c;

void *func_02082dcc(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ce97c;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x10);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_0207b61c(arg0 + 0x38);
    func_0203491c(arg0);
    return arg0;
}
