#include "m2c.h"

M2C_UNK func_0201f488(M2C_UNK, void *);             /* extern */
void *func_0201f4e8(M2C_UNK, M2C_UNK);              /* extern */
s32 func_02038e10();                                /* extern */
M2C_UNK func_02038e24(s32);                         /* extern */

void *func_02030b34(M2C_UNK arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r1;

    temp_r4 = func_02038e10();
    temp_r0 = func_0201f4e8(arg0, 0);
    if (temp_r0 != NULL) {
        func_0201f488(arg0, temp_r0);
        temp_r1                          = M2C_FIELD(temp_r0, void **, 8);
        M2C_FIELD(temp_r1, s32 *, 0x11C) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x11C) - 1);
    }
    func_02038e24(temp_r4);
    return temp_r0;
}
