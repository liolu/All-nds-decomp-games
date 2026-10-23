#include "m2c.h"

M2C_UNK func_020934a8(void *);                      /* extern */
M2C_UNK func_ov005_0215c21c(void *);                      /* extern */
M2C_UNK func_ov005_0215dc70(void *);                      /* extern */

void *func_ov005_0215de24(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x50);
    if (temp_r4 != NULL) {
        func_ov005_0215dc70(temp_r4);
        func_020934a8(temp_r4);
    }
    func_ov005_0215c21c(arg0);
    func_020934a8(arg0);
    return arg0;
}
