/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0202abdc(M2C_UNK, M2C_UNK);                /* extern */
void *func_0202acfc();                              /* extern */
s32 func_0202ad84(M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_0202aeb0(M2C_UNK, M2C_UNK);            /* extern */

s32 func_0202bf18(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r0_2;

    temp_r0 = func_0202abdc(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0202aeb0(3, arg0);
    temp_r0_2 = func_0202acfc();
    var_r0 =
        func_0202ad84(3, 3, M2C_FIELD(temp_r0_2, s32 *, 0), M2C_FIELD(temp_r0_2, s32 *, 4), M2C_FIELD(temp_r0_2, s32 *, 0x10));
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
