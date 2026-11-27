/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_02059f70(s32);                         /* extern */
extern M2C_UNK data_02160654;

void func_0204c294(void) {
    s32 var_r6;

    var_r6 = 0;
    do {
        func_02059f70(*((M2C_UNK *) ((s8 *) &data_02160654 + (var_r6 * 4))));
        *((M2C_UNK *) ((s8 *) &data_02160654 + (var_r6 * 4))) = 0;
        var_r6 += 1;
    } while (var_r6 < 4);
}
