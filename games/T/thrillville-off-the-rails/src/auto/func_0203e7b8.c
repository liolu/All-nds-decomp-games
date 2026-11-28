#include "m2c.h"

M2C_UNK func_0203e7f0(void *, M2C_UNK);             /* extern */
M2C_UNK func_0203e80c(void *, M2C_UNK *);           /* extern */

void *func_0203e7b8(void *arg0) {
    M2C_UNK sp0;
    void *temp_r1;

    func_0203e7f0(arg0, 0);
    func_0203e80c(arg0 + 4, &sp0);
    temp_r1                        = arg0 + 4;
    M2C_FIELD(temp_r1, void **, 4) = temp_r1;
    M2C_FIELD(arg0, void **, 4)    = temp_r1;
    return arg0;
}
