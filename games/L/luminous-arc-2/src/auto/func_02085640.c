#include "m2c.h"

M2C_UNK func_02085550(u8);                          /* extern */
M2C_UNK func_020855c4();                            /* extern */
s32 func_02085630();                                /* extern */
extern s32 data_02170354;

s32 func_02085640(s32 arg0, s32 arg1) {
    u8 var_r3;

    var_r3 = 0;
    if (arg1 > 0) {
    loop_2:
        if (arg0 != M2C_FIELD((data_02170354 + (var_r3 * 4)), s32 *, 0x46C)) {
            var_r3 += 1;
            if ((s32) var_r3 < arg1) {
                goto loop_2;
            }
        }
    }
    if ((s32) var_r3 >= arg1) {
        return 0;
    }
    func_02085550(M2C_FIELD((data_02170354 + var_r3), u8 *, 0x648));
    func_020855c4();
    return func_02085630();
}
