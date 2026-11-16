/* compiler: 1.2/sp3 -O2,p */
#include "m2c.h"

M2C_UNK func_02031618(s32);                         /* extern */
extern M2C_UNK data_020a9d2c;
extern M2C_UNK data_020aa204;

void func_020365f0(void) {
    s32 var_r2;
    s32 var_r6;

    var_r6 = 0;
    do {
        func_02031618((var_r6 * 0x7C) + (s32) &data_020a9d2c);
        var_r6 += 1;
    } while (var_r6 < 0xA);
    var_r2 = 0;
    do {
        *((M2C_UNK *) ((s8 *) &data_020aa204 + (var_r2 * 4))) = 0;
        var_r2 += 1;
    } while (var_r2 < 0x5A);
}
