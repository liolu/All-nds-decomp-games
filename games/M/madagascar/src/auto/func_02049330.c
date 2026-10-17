/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02049380(void *, s32);                 /* extern */
M2C_UNK func_0204a1e8(void *);                      /* extern */
M2C_UNK func_0204a248(void *, s32, M2C_UNK);        /* extern */

void func_02049330(void *arg0) {
    s32 var_r4;

    var_r4 = 1;
    do {
        func_02049380(arg0, var_r4);
        var_r4 -= 1;
    } while (var_r4 >= 0);
    func_0204a248(arg0, M2C_FIELD(arg0, s32 *, 4), 0x54);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_0204a1e8(arg0);
}
