#include "m2c.h"

M2C_UNK func_020af8c4(void **);                     /* extern */

void func_0205352c(void *arg0) {
    void **temp_r0;

    func_020af8c4(M2C_FIELD(arg0, void ***, 0xBB68));
    temp_r0 = M2C_FIELD(arg0, void ***, 0xBB68);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
}
