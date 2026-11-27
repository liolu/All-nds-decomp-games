/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

void *func_0206d4dc();                              /* extern */
extern M2C_UNK data_0210e740;

s32 func_0204e598(s32 arg0) {
    s32 var_r5;

    var_r5 = 0;
loop_1:
    if ((*((M2C_UNK *) ((s8 *) &data_0210e740 + (var_r5 * 4))) != 0) && (arg0 == M2C_FIELD(func_0206d4dc(), u8 *, 1))) {
        return 1;
    }
    var_r5 += 1;
    if (var_r5 >= 0x20) {
        return 0;
    }
    goto loop_1;
}
