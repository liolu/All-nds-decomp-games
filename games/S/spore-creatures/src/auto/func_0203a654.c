#include "m2c.h"

M2C_UNK func_02037814(void *);                      /* extern */
M2C_UNK func_02038530(void *);                      /* extern */
M2C_UNK func_020a2ec4(void *);                      /* extern */

void *func_0203a654(void *arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x80);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x14)(temp_r0);
    }
    func_020a2ec4(arg0 + 0x74);
    func_02038530(arg0 + 0x10);
    func_02037814(arg0);
    return arg0;
}
