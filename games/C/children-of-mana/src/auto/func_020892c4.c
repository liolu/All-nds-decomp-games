/* compiler: 1.2/sp2p3 -O2 */
#include "m2c.h"

M2C_UNK func_0208c028();                            /* extern */
M2C_UNK func_0208d3b0();                            /* extern */
M2C_UNK func_020c7928();                            /* extern */
M2C_UNK func_020d279c();                            /* extern */
M2C_UNK func_020de9a8();                            /* extern */
extern s32 data_021266b8;
extern s32 data_021266c4;
extern s32 data_021266c8;
extern s32 data_021266cc;
extern M2C_UNK data_021266d0;

void func_020892c4(void) {
    s32 var_r5;

    if (data_021266c8 != 0) {
        func_0208d3b0();
    }
    var_r5 = 0;
    do {
        if (*((M2C_UNK *) ((s8 *) &data_021266d0 + (var_r5 * 4))) != 0) {
            func_0208c028();
        }
        var_r5 += 1;
    } while (var_r5 < 4);
    if (data_021266cc != 0) {
        func_020c7928();
    }
    if (data_021266b8 != 0) {
        func_020d279c();
    }
    if (data_021266c4 == 0) {
        return;
    }
    func_020de9a8();
}
