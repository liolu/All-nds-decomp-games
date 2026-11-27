/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

M2C_UNK func_0200b798();                            /* extern */
extern void *data_020d1d24;

void func_02044ef0(void) {
    s32 var_r3;
    void *temp_r1;

    var_r3 = 0;
    do {
        M2C_FIELD((data_020d1d24 + (var_r3 * 8)), s16 *, 0x45CC) = 0;
        M2C_FIELD((data_020d1d24 + (var_r3 * 8)), s16 *, 0x45CE) = 0;
        temp_r1                                                  = data_020d1d24 + (var_r3 * 8) + 0x4000;
        var_r3 += 1;
        M2C_FIELD(temp_r1, s32 *, 0x5D0) = 0;
    } while (var_r3 < 8);
    M2C_FIELD(data_020d1d24, s8 *, 0x3C65) = 0;
    *(s16 *) 0x0400004C                    = 0;
    func_0200b798();
    M2C_FIELD(data_020d1d24, s8 *, 0) = 4;
    M2C_FIELD(data_020d1d24, s8 *, 1) = 0;
}
