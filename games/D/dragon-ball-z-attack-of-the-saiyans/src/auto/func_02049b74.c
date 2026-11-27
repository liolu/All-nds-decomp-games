#include "m2c.h"

M2C_UNK func_02012a90(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0204934c();                            /* extern */
void *func_02053a7c();                              /* extern */

s32 func_02049b74(M2C_UNK arg0) {
    void *temp_r0;

    func_02012a90(arg0, 1);
    func_0204934c();
    temp_r0 = func_02053a7c();
    if (temp_r0 == NULL) {
        return -1;
    }
    return M2C_FIELD(temp_r0, s32 *, 0xA0);
}
