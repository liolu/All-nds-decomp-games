/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020e2c34(void *);                      /* extern */

void func_020e225c(void *arg0) {
    s32 var_r5;
    void *var_r4;

    if (M2C_FIELD(arg0, s32 *, 0xE04) == 0) {
        return;
    }
    var_r4 = arg0 + 0xC;
    var_r5 = 0;
    do {
        func_020e2c34(var_r4);
        var_r5 += 1;
        var_r4 += 0x254;
    } while (var_r5 < 6);
}
