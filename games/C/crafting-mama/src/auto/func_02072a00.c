#include "m2c.h"

M2C_UNK func_02028d74();                            /* extern */
s32 func_02071e28();                                /* extern */
void *func_02072ba0();                              /* extern */

s32 func_02072a00(void) {
    s32 var_r0;
    void *temp_r4;

    temp_r4 = func_02072ba0();
    func_02028d74();
    if (M2C_FIELD(temp_r4, s32 *, 0xC) != func_02071e28()) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return 0 - var_r0;
}
