/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020693e0();                                /* extern */
M2C_UNK func_0206ac0c();                            /* extern */
M2C_UNK func_02070110(s32);                         /* extern */
M2C_UNK func_020705a4();                            /* extern */
extern M2C_UNK data_02182e94;

void func_020565a4(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg0;
    func_020705a4();
    temp_r0 = func_020693e0();
    if (temp_r0 == -3) {
        func_0206ac0c();
    }
    M2C_FIELD(&data_02182e94, s32 *, 0) = temp_r0;
    if ((var_r4 != 0x901) && (var_r4 != 0xD01) && (var_r4 != 0x1202)) {
        var_r4 = 0;
    }
    func_02070110(var_r4);
    M2C_FIELD(&data_02182e94, s32 *, 4) = var_r4;
    M2C_FIELD(&data_02182e94, s32 *, 8) = 0;
}
