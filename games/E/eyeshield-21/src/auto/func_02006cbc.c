/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

extern M2C_UNK data_020fb6e0;
extern M2C_UNK data_020fdb30;

void func_02006cbc(void) {
    s32 var_r3;
    void *temp_r0;

    var_r3 = 0;
    do {
        M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_020fdb30 + (var_r3 * 4))), s32 *, 0x1288) = -1;
        temp_r0 = *((M2C_UNK *) ((s8 *) &data_020fdb30 + (var_r3 * 4)));
        var_r3 += 1;
        M2C_FIELD(temp_r0, s32 *, 0x1290) = -1;
    } while (var_r3 < 2);
    M2C_FIELD(&data_020fb6e0, s32 *, 0xD4) = -1;
    M2C_FIELD(&data_020fb6e0, s32 *, 0xD8) = 0;
}
