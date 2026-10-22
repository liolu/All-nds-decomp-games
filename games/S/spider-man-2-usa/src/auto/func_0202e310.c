/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02035aa4(s32, M2C_UNK);                /* extern */
void *func_02036848(void *, M2C_UNK, M2C_UNK);      /* extern */
void *func_0203a6cc(M2C_UNK);                       /* extern */

void func_0202e310(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *var_r0;

    var_r0 = func_0203a6cc(0x28);
    if (var_r0 != NULL) {
        var_r0 = func_02036848(var_r0, arg1, arg2);
    }
    M2C_FIELD(arg0, void **, 0x14) = var_r0;
    func_02035aa4(M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x20), 2);
    M2C_FIELD(arg0, s32 *, 4) = 1;
}
