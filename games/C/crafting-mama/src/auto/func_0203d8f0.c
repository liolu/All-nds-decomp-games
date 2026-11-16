/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_0203dbbc(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0203dd48(s32, s32);                        /* extern */
extern M2C_UNK data_020aab34;

void func_0203d8f0(void) {
    s32 var_r6;

    var_r6 = 0;
    do {
        *((M2C_UNK *) ((s8 *) &data_020aab34 + (var_r6 * 4))) = func_0203dd48(var_r6, 0);
        var_r6 += 1;
    } while (var_r6 < 0x16);
    M2C_FIELD(&data_020aab34, s32 *, 0x58) = 0x17;
    func_0203dbbc(1, 1);
}
