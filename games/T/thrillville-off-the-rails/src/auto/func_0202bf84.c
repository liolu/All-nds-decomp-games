/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02022e10();                /* extern */
s32 func_0202abdc();       /* extern */
void *func_0202acfc();                              /* extern */
s32 func_0202ad84();                /* extern */
M2C_UNK func_0202aeb0();            /* extern */

s32 func_0202bf84(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r4;

    temp_r4 = func_0202acfc();
    temp_r0 = func_0202abdc(2, 9, 0xA);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02022e10(M2C_FIELD(temp_r4, void **, 4) + 0xC, 4);
    if (M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), s32 *, 0xC) == 0) {
        return 3;
    }
    func_0202aeb0(0x10, arg0);
    var_r0 = func_0202ad84(0x10, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
