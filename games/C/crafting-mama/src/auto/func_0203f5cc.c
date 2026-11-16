/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_020315bc(s32);                         /* extern */
extern M2C_UNK data_020aabcc;

void func_0203f5cc(void) {
    s32 var_r6;

    var_r6 = 0;
    do {
        func_020315bc(*((M2C_UNK *) ((s8 *) &data_020aabcc + (var_r6 * 4))));
        *((M2C_UNK *) ((s8 *) &data_020aabcc + (var_r6 * 4))) = 0;
        var_r6 += 1;
    } while (var_r6 < 0xB);
}
