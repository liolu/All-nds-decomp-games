/* Reconstructed from USA ARM9 at 0x02060bd4 (68 bytes).
 * Names and types are inferred from the binary.
 */
#include "m2c.h"

extern M2C_UNK data_020e7da4;
extern M2C_UNK data_020e84c4;

void func_02093bbc(s32 arg0) {
    s32 temp_r1;
    u32 var_r3;
    void *var_r1;

    temp_r1                                     = arg0 * 0x724;
    var_r3                                      = 0;
    *((u8 *) ((s8 *) &data_020e84c4 + temp_r1)) = 0;
    var_r1                                      = (M2C_UNK *) ((s8 *) &data_020e7da4 + temp_r1);
    do {
        var_r3 += 1;
        M2C_FIELD(var_r1, u8 *, 0x700) = 0;
        var_r1 += 1;
    } while (var_r3 < 0x20U);
}
