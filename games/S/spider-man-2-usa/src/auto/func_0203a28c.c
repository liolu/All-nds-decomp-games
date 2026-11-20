/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205746c();                            /* extern */
M2C_UNK func_02057d18(M2C_UNK, s32, s32, s32, s32, s32); /* extern */

void func_0203a28c(void *arg0) {
    s32 var_r7;
    void *var_r6;

    func_0205746c();
    var_r7 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x618) <= 0) {
        return;
    }
    var_r6 = arg0 + 0x18;
    do {
        func_02057d18(3, M2C_FIELD(var_r6, s32 *, 0), M2C_FIELD(var_r6, s32 *, 4), M2C_FIELD(var_r6, s32 *, 8), 0, 0);
        var_r7 += 1;
        var_r6 += 0xC;
    } while (var_r7 < (s32) M2C_FIELD(arg0, s32 *, 0x618));
}
