#include "m2c.h"

M2C_UNK func_0203491c(void *);                      /* extern */
M2C_UNK func_02074c40(void *, void *);              /* extern */

void func_02074bf8(void **arg0, s32 *arg1, void **arg2) {
    void *temp_r5;

    temp_r5 = *arg2;
    *arg2   = M2C_FIELD(temp_r5, void **, 4);
    func_02074c40(temp_r5, temp_r5);
    func_0203491c(temp_r5);
    *arg1 -= 1;
    *arg0 = *arg2;
}
