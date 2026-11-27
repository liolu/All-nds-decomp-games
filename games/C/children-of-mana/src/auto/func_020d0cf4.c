/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _Z16unkfunc_02121100i();                    /* extern */

void func_020d0cf4(void *arg0) {
    M2C_UNK (*temp_r2)(M2C_UNK, s32);
    M2C_UNK var_r0;
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 2);
    if ((temp_r0 != 0) && (temp_r0 != 0xF)) {
        _Z16unkfunc_02121100i();
        return;
    }
    temp_r2 = M2C_FIELD(arg0, M2C_UNK(**)(M2C_UNK, s32), 0x20);
    if (temp_r2 == NULL) {
        return;
    }
    if (temp_r0 == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    temp_r2(var_r0, M2C_FIELD(arg0, s32 *, 0x14));
}
