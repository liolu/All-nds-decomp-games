#include "m2c.h"

M2C_UNK func_0203a9bc(s32);                         /* extern */
M2C_UNK func_0208cb10(s32, M2C_UNK);                /* extern */
M2C_UNK func_0208cc24(s32, M2C_UNK);                /* extern */
M2C_UNK func_020934a8(s32);                         /* extern */

void func_02035824(void *arg0) {
    s32 temp_r4;

    func_0208cc24(arg0 + 0x14, 0);
    func_0208cb10(arg0 + 0x14, 0);
    temp_r4                      = M2C_FIELD(arg0, s32 *, 0x84);
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    if (temp_r4 == 0) {
        return;
    }
    func_0203a9bc(temp_r4);
    func_020934a8(temp_r4);
}
