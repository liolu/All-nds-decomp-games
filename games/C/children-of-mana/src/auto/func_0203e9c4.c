/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s8 data_02117570;

void func_0203e9c4(void) {
    s32 var_r2;
    s8 *var_r1;

    var_r1 = &data_02117570;
    var_r2 = 0;
    do {
        var_r2 += 1;
        *var_r1 = 0;
        var_r1 += 1;
    } while (var_r2 < 0xC);
}
