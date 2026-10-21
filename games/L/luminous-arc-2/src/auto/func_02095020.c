#include "m2c.h"

s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
void *func_02093afc();                              /* extern */

s32 func_02095020(void) {
    s32 *temp_r1;
    s32 temp_r4;
    s32 var_r5;
    void *temp_r0;

    temp_r4 = func_02006be0();
    temp_r0 = func_02093afc();
    var_r5  = 0;
    if (temp_r0 == NULL) {
        func_02006bf4(temp_r4);
        return 0;
    }
    temp_r1 = M2C_FIELD(temp_r0, s32 **, 0x2270);
    if ((temp_r1 != NULL) && ((u32) M2C_FIELD(temp_r0, u32 *, 0x2274) > 0xCU)) {
        var_r5 = *temp_r1;
    }
    func_02006bf4(temp_r4);
    return var_r5;
}
