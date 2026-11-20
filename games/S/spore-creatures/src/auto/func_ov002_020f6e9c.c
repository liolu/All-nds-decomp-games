#include "m2c.h"

M2C_UNK func_020934a8(void *);                      /* extern */
M2C_UNK func_ov002_0210b1c0(void *);                      /* extern */
M2C_UNK func_ov002_020f6d8c(void *);                      /* extern */

void *func_ov002_020f6e9c(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x2C);
    if (temp_r4 != NULL) {
        func_ov002_020f6d8c(temp_r4);
        func_020934a8(temp_r4);
    }
    func_ov002_0210b1c0(arg0);
    func_020934a8(arg0);
    return arg0;
}
