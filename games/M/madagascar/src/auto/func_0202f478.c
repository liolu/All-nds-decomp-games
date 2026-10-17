/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000eac(s32, s32, M2C_UNK, s32);      /* extern */
M2C_UNK func_020246e8(void *, s32, M2C_UNK);        /* extern */
void *func_02030184(void *, M2C_UNK);               /* extern */

void func_0202f478(void *arg0) {
    s32 temp_r1;
    s32 var_r1;
    void *temp_r4;

    temp_r4 = func_02030184(arg0, 1);
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), u8 *, 0x34) != 0) {
        var_r1 = -1;
    } else {
        var_r1 = 1;
    }
    temp_r1 = var_r1 << 8;
    func_02000eac(M2C_FIELD(arg0, s32 *, 0x1BC) + 4, temp_r1, 0x100, temp_r1);
    func_020246e8(M2C_FIELD(arg0, void **, 0x1C4), M2C_FIELD(temp_r4, s32 *, 4), 0);
    M2C_FIELD(arg0, s32 *, 0x1EC) = 0xB;
}
