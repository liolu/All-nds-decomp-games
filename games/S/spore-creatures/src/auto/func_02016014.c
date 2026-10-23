#include "m2c.h"

M2C_UNK func_020934a8(void *);                      /* extern */
M2C_UNK func_02015718(void *);                      /* extern */
M2C_UNK func_0209667c(void *);                      /* extern */

void *func_02016014(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x2C);
    if (temp_r4 != NULL) {
        func_0209667c(temp_r4);
        func_020934a8(temp_r4);
    }
    func_02015718(arg0);
    func_020934a8(arg0);
    return arg0;
}
