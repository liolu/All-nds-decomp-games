/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020125f4(void *, M2C_UNK);             /* extern */
M2C_UNK func_02013270(void *, M2C_UNK);             /* extern */
M2C_UNK func_02013ca8(void *, M2C_UNK);             /* extern */
M2C_UNK func_02013d10(void *);                      /* extern */
s32 func_02019810(s32, M2C_UNK);                    /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */
M2C_UNK func_02045738(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02045760(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_02012970(void *arg0) {
    s32 var_r0;

    func_02045760(2, 0, 1);
    func_02013ca8(arg0, 0);
    func_02013d10(arg0);
    func_02013270(arg0, 1);
    func_020125f4(arg0, 0xB);
    var_r0 = func_0203a6cc(0x68);
    if (var_r0 != 0) {
        var_r0 = func_02019810(var_r0, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r0;
    func_02045738(2, 1, 1);
}
