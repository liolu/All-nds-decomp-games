/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207cee4(void *);                      /* extern */
M2C_UNK func_0207cf30(void *, s32);                 /* extern */
s32 func_020a5484(s32);                             /* extern */

void func_0207d0e8(void *arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = func_020a5484(M2C_FIELD(arg0, s32 *, 0x44));
    switch (arg1) {                                 /* irregular */
        case 1:
            var_r1 += 1;
            break;
        case 0:
            var_r1 -= 1;
            break;
    }
    func_0207cf30(arg0, var_r1);
    func_0207cee4(arg0);
}
