#include "m2c.h"

M2C_UNK func_02034278(void *, M2C_UNK);             /* extern */
M2C_UNK func_0206a234(M2C_UNK);                     /* extern */

void func_0203522c(void *arg0) {
    void **temp_r0;

    func_02034278(arg0, 1);
    temp_r0 = M2C_FIELD(arg0, void ***, 0x88);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK, M2C_UNK), 0x2C)(temp_r0, 0, 0);
    func_0206a234(0xF);
}
