/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

s32 func_0207f4dc(s32);                             /* extern */
extern M2C_UNK data_0218387c;

u8 func_020591bc(void) {
    u8 var_r6;
    u8 var_r7;

    var_r6 = 0;
    var_r7 = 0;
    do {
        if (func_0207f4dc((var_r7 * 0xC) + (s32) &data_0218387c) != 0) {
            var_r6 += 1;
        }
        var_r7 += 1;
    } while ((u32) var_r7 < 0x1EU);
    return var_r6;
}
