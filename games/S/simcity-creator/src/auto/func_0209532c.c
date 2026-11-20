#include "m2c.h"

M2C_UNK func_0203491c(void *);                      /* extern */
extern M2C_UNK data_020cee10;

void *func_0209532c(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020cee10;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x638);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_0203491c(arg0);
    return arg0;
}
