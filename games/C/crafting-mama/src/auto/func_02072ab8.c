#include "m2c.h"

void *func_02072ba0();                              /* extern */
M2C_UNK func_02072bac();                            /* extern */
s32 *func_02072bbc();                               /* extern */
M2C_UNK func_02072e00();                            /* extern */
s32 *func_02072f54();                               /* extern */
s32 *func_02072f7c(M2C_UNK);                        /* extern */

void func_02072ab8(void) {
    s32 *temp_r4;
    s32 *temp_r5;
    void *temp_r0;

    temp_r5  = func_02072f54();
    temp_r4  = func_02072f7c(0);
    *temp_r5 = 4;
    if (func_02072bbc() != NULL) {
        *temp_r4 = *func_02072bbc();
    }
    func_02072bac();
    func_02072e00();
    temp_r0                         = func_02072ba0();
    M2C_FIELD(temp_r0, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x18) | 0x400);
}
