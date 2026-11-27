/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204c260(void *);                      /* extern */

void func_0204e1e0(void *arg0) {
    s32 var_r5;
    void *var_r4;

    if (M2C_FIELD(arg0, u8 *, 0x22A) == 0) {
        return;
    }
    var_r4 = arg0 + 0x18;
    var_r5 = 0;
    do {
        func_0204c260(var_r4);
        var_r5 += 1;
        var_r4 += 0x2C;
    } while (var_r5 < 6);
    M2C_FIELD(arg0, s32 *, 0x120) = 0;
    M2C_FIELD(arg0, u8 *, 0x22A)  = 0U;
}
