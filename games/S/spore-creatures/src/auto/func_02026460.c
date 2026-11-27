#include "m2c.h"

M2C_UNK func_0202d858(void *);                      /* extern */

void *func_02026460(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x128);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x124);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    func_0202d858(arg0 + 0x110);
    return arg0;
}
