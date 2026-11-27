#include "m2c.h"

M2C_UNK func_020a5a48(void *);                      /* extern */

void func_02021854(void *arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 4);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x14)(temp_r0);
        M2C_FIELD(arg0, void ***, 4) = NULL;
    }
    func_020a5a48(arg0 + 8);
}
