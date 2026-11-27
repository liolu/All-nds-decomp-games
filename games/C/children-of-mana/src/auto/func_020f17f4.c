/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020f17b8();                            /* extern */

void func_020f17f4(void *arg0, void *arg1) {
    void *var_r5;

    var_r5 = arg0;
    func_020f17b8();
    M2C_FIELD(var_r5, void **, 0x4DC) = arg1;
    if (arg1 == NULL) {
        return;
    }
    if (var_r5 != NULL) {
        var_r5 += 4;
    }
    M2C_FIELD(arg1, s32 *, 4)   = (s32) (M2C_FIELD(arg1, s32 *, 4) + 1);
    M2C_FIELD(var_r5, s32 *, 4) = (s32) (M2C_FIELD(var_r5, s32 *, 4) + 1);
}
