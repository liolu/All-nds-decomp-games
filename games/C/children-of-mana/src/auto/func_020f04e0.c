/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

s32 func_0200eee0(s32);                             /* extern */
s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0208ff94(s32, s32, s32);               /* extern */
s32 func_020900a0();                                /* extern */
M2C_UNK func_020f0478();                            /* extern */
extern M2C_UNK data_0210f358;
extern M2C_UNK data_02131228;

void func_020f04e0(void) {
    s32 var_r0;
    s32 var_r9;

    func_020f0478();
    var_r9 = 0;
    do {
        var_r0 = func_0200f270(0x18, 0);
        if (var_r0 != 0) {
            var_r0 = func_020900a0();
        }
        *((M2C_UNK *) ((s8 *) &data_02131228 + (var_r9 * 4))) = var_r0;
        func_0208ff94(*((M2C_UNK *) ((s8 *) &data_02131228 + (var_r9 * 4))),
                      func_0200eee0(*((M2C_UNK *) ((s8 *) &data_0210f358 + (var_r9 * 4)))), 0);
        var_r9 += 1;
    } while (var_r9 < 2);
}
