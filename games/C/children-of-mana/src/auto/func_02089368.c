/* compiler: 1.2/sp2p3 -O2 */
#include "m2c.h"

M2C_UNK func_0208c164();                            /* extern */
M2C_UNK func_0208d460();                            /* extern */
M2C_UNK func_020c7948();                            /* extern */
M2C_UNK func_020d2928();                            /* extern */
M2C_UNK func_020deb9c();                            /* extern */
extern s32 data_021266b8;
extern s32 data_021266c4;
extern s32 data_021266c8;
extern s32 data_021266cc;
extern M2C_UNK data_021266d0;

void func_02089368(void) {
    s32 var_r5;

    if (data_021266c8 != 0) {
        func_0208d460();
    }
    var_r5 = 0;
    do {
        if (*((M2C_UNK *) ((s8 *) &data_021266d0 + (var_r5 * 4))) != 0) {
            func_0208c164();
        }
        var_r5 += 1;
    } while (var_r5 < 4);
    if (data_021266cc != 0) {
        func_020c7948();
    }
    if (data_021266b8 != 0) {
        func_020d2928();
    }
    if (data_021266c4 == 0) {
        return;
    }
    func_020deb9c();
}
