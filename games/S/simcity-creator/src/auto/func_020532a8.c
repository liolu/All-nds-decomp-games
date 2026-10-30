#include "m2c.h"

M2C_UNK func_0201cda8(void **);                     /* extern */

void func_020532a8(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;

    func_0201cda8(M2C_FIELD(arg0, void ***, 0x10));
    temp_r0 = M2C_FIELD(arg0, void ***, 8);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0xC);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x10);
    if (temp_r0_3 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
}
