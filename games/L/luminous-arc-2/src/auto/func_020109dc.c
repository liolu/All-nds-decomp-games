#include "m2c.h"

M2C_UNK func_02005aac(s32, M2C_UNK);                /* extern */
M2C_UNK func_02007558(s32, s32, M2C_UNK);           /* extern */
void *func_0201036c();                              /* extern */
s32 func_0201037c();                                /* extern */

s32 func_020109dc(s32 arg0) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = func_0201036c();
    temp_r0 = func_0201037c();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg0 == 0) {
        return 6;
    }
    func_02005aac(M2C_FIELD(temp_r4, s32 *, 4), 0x7D0);
    func_02007558(M2C_FIELD(temp_r4, s32 *, 4), arg0, 0x7D0);
    return 0;
}
