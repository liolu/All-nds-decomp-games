#include "m2c.h"

M2C_UNK func_0203491c(void **);                     /* extern */

void func_02077070(void *arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x70);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    func_0203491c(M2C_FIELD(arg0, void ***, 0x70));
    M2C_FIELD(arg0, void ***, 0x70) = NULL;
}
