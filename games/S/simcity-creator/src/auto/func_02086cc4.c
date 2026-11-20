#include "m2c.h"

M2C_UNK func_0203491c(void *);                      /* extern */
M2C_UNK func_0208693c(void *);                      /* extern */
M2C_UNK func_02086ca8(void *, void *);              /* extern */

void func_02086cc4(void **arg0, s32 *arg1, void **arg2) {
    void *temp_r5;

    temp_r5 = *arg2;
    *arg2   = M2C_FIELD(temp_r5, void **, 4);
    func_02086ca8(temp_r5, temp_r5);
    func_0208693c(temp_r5 + 8);
    func_0203491c(temp_r5);
    *arg1 -= 1;
    *arg0 = *arg2;
}
