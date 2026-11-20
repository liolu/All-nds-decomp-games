/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206302c(s32, M2C_UNK);                /* extern */
M2C_UNK func_0206470c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020647a0(s32, void *, M2C_UNK);        /* extern */
s32 func_0206b124(M2C_UNK, M2C_UNK);                /* extern */
void *func_0206b244();                              /* extern */
s32 func_0206b254(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0206b370(M2C_UNK, M2C_UNK);            /* extern */

s32 func_0206bb04(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r1;

    temp_r0 = func_0206b124(1, 2);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg1 == 0) {
        return 6;
    }
    func_0206302c(arg1, 0xC0);
    func_0206b370(0xC, arg0);
    temp_r1                      = M2C_FIELD(func_0206b244(), void **, 0xC);
    M2C_FIELD(temp_r1, s16 *, 0) = 0xC;
    M2C_FIELD(temp_r1, s32 *, 4) = arg1;
    if (arg2 != 0) {
        func_020647a0(arg2, temp_r1 + 8, 0x18);
    } else {
        func_0206470c(temp_r1 + 8, 0, 0x18);
    }
    var_r0 = func_0206b254(0xC, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
