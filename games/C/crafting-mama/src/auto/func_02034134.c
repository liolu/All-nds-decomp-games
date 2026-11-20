#include "m2c.h"

s32 func_02003890(s32);                             /* extern */
s8 func_02029798(M2C_UNK);                          /* extern */
M2C_UNK func_0202c1c8(s32, void *);                 /* extern */
M2C_UNK func_0202c1d4(s32, M2C_UNK *);              /* extern */
extern M2C_UNK data_02083c24;

void func_02034134(s32 arg0, s32 arg1) {
    s8 *var_r1;
    s8 temp_r0;
    void *temp_r4;

    func_0202c1d4(arg0, &data_02083c24);
    var_r1 = (arg1 + func_02003890(arg1)) - 1;
    do {
        temp_r0 = *var_r1;
        var_r1 -= 1;
    } while (temp_r0 != 0x2F);
    func_0202c1c8(arg0, var_r1 + 1);
    temp_r4                      = arg0 + func_02003890(arg0);
    M2C_FIELD(temp_r4, s8 *, -1) = func_02029798(1);
}
