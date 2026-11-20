#include "m2c.h"

M2C_UNK func_020934a8(void *);                      /* extern */
M2C_UNK func_020427a0(void *);                      /* extern */
M2C_UNK func_0200956c(void *);                      /* extern */

void *func_020099e8(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x30);
    if (temp_r4 != NULL) {
        func_0200956c(temp_r4);
        func_020934a8(temp_r4);
    }
    func_020427a0(arg0);
    func_020934a8(arg0);
    return arg0;
}
