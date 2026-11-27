/* compiler: 1.2/sp2p3 -O2 */
#include "m2c.h"

s32 func_0209c26c();                                /* extern */

void func_0209cbc0(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_r4;
    void **temp_r0;

    M2C_FIELD(arg0, s32 *, 0x104) = func_0209c26c();
    var_r4                        = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x100) <= 0) {
        return;
    }
    do {
        temp_r0 = M2C_FIELD((arg0 + (var_r4 * 4)), void ***, 0xA0);
        M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK, M2C_UNK), 0xA4)(temp_r0, arg1, arg2);
        var_r4 += 1;
    } while (var_r4 < (s32) M2C_FIELD(arg0, s32 *, 0x100));
}
