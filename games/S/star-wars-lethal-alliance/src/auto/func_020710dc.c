#include "m2c.h"

M2C_UNK func_02066304(s32, M2C_UNK);                /* extern */
M2C_UNK func_02070148(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020701b8(M2C_UNK, M2C_UNK, s32);           /* extern */
void *func_020702d4();                              /* extern */
s32 func_02070348(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

s32 func_020710dc(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r6;

    temp_r6 = func_020702d4();
    temp_r0 = func_02070348(2, 7, 9);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02066304(M2C_FIELD(temp_r6, void **, 4) + 0x182, 2);
    if (!(M2C_FIELD(M2C_FIELD(temp_r6, void **, 4), u16 *, 0x182) & arg1 & 0xFFFE)) {
        return 7;
    }
    func_02070148(0xD, arg0);
    var_r0 = func_020701b8(0xD, 1, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
