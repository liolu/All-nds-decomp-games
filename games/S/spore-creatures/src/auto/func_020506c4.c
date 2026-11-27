#include "m2c.h"

M2C_UNK func_02036008(void *);                      /* extern */
M2C_UNK func_0204b19c(void *);                      /* extern */
M2C_UNK func_020934a8(void *);                      /* extern */
M2C_UNK func_ov003_02148b2c(s32);                   /* extern */

void *func_020506c4(void *arg0) {
    void *temp_r4;

    func_ov003_02148b2c(arg0 + 0x41C);
    temp_r4 = M2C_FIELD(arg0, void **, 0x3F8);
    if (temp_r4 != NULL) {
        func_02036008(temp_r4);
        func_020934a8(temp_r4);
    }
    func_020934a8(M2C_FIELD(arg0, void **, 0x3F4));
    func_0204b19c(arg0);
    func_020934a8(arg0);
    return arg0;
}
