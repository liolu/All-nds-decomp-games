#include "m2c.h"

M2C_UNK func_020630a8(void *);                      /* extern */
M2C_UNK func_020934a8(void *);                      /* extern */

void *func_02062708(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 4);
    if (temp_r4 != NULL) {
        func_020630a8(temp_r4);
        func_020934a8(temp_r4);
    }
    func_020934a8(arg0);
    return arg0;
}
