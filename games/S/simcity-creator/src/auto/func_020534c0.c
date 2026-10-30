#include "m2c.h"

M2C_UNK func_0200c504(M2C_UNK);                     /* extern */
M2C_UNK func_0201cc24(s32);                         /* extern */
M2C_UNK func_0201cd24(s32);                         /* extern */
M2C_UNK func_0203491c(s32);                         /* extern */

void func_020534c0(void *arg0) {
    s32 temp_r4;

    func_0200c504(0);
    func_0201cd24(M2C_FIELD(arg0, s32 *, 0xBB64));
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xBB64);
    if (temp_r4 == 0) {
        return;
    }
    func_0201cc24(temp_r4);
    func_0203491c(temp_r4);
}
