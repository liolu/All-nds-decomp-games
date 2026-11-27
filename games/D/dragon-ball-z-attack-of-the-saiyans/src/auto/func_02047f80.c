/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0203549c();                            /* extern */
extern s32 data_020d1d24;

s32 func_02047f80(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r3;
    void *temp_r1;

    temp_r5 = func_02012a90(arg0, 1);
    temp_r4 = func_02012a90(arg0, 2);
    temp_r0 = func_02012a90(arg0, 3);
    if (temp_r5 < 0) {
        var_r3 = 0;
        do {
            M2C_FIELD((data_020d1d24 + (var_r3 * 8)), s32 *, 0x3C44) = temp_r4;
            temp_r1                                                  = data_020d1d24 + (var_r3 * 8) + 0x3000;
            var_r3 += 1;
            M2C_FIELD(temp_r1, s32 *, 0xC48) = temp_r0;
        } while (var_r3 < 3);
    } else {
        M2C_FIELD((data_020d1d24 + (temp_r5 * 8)), s32 *, 0x3C44) = temp_r4;
        M2C_FIELD((data_020d1d24 + (temp_r5 * 8)), s32 *, 0x3C48) = temp_r0;
    }
    func_0203549c();
    return 1;
}
