/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_01ffa43c();                              /* extern */
M2C_UNK func_02002bc8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02002bf4(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02003dc4(void *);                      /* extern */

void func_02003378(void *arg0) {
    M2C_UNK var_r2;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F4), u8 *, 0x86) == 0) {
        return;
    }
    if ((s32) M2C_FIELD(func_01ffa43c(), s32 *, 0x298) > (s32) M2C_FIELD(arg0, s32 *, 0x298)) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    func_02002bf4(arg0, 2, var_r2);
    func_02002bc8(arg0, 2, 0);
    func_02003dc4(arg0);
}
