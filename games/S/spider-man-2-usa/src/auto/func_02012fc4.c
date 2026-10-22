/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020125f4(void *, M2C_UNK);             /* extern */
M2C_UNK func_02013d10();                            /* extern */
s32 func_0201aa18(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */
s32 func_0204af48();                                /* extern */
extern M2C_UNK data_02078234;

void func_02012fc4(void *arg0) {
    M2C_UNK var_r2;
    s32 temp_r4;
    s32 var_r0;

    func_02013d10();
    func_020125f4(arg0, 2);
    temp_r4 = func_0204af48();
    var_r0  = func_0203a6cc(0x54);
    if (var_r0 != 0) {
        if (temp_r4 == 0) {
            var_r2 = 1;
        } else {
            var_r2 = 0;
        }
        var_r0 = func_0201aa18(var_r0, &data_02078234, var_r2, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r0;
}
