#include "m2c.h"

M2C_UNK func_0203d260(void *, M2C_UNK);             /* extern */
M2C_UNK func_0203d27c(void *, M2C_UNK *);           /* extern */

void *func_0203d200(void *arg0) {
    M2C_UNK sp0;
    void *temp_r1;

    func_0203d260(arg0, 0);
    func_0203d27c(arg0 + 4, &sp0);
    temp_r1                        = arg0 + 4;
    M2C_FIELD(temp_r1, void **, 4) = temp_r1;
    M2C_FIELD(arg0, void **, 4)    = temp_r1;
    return arg0;
}
