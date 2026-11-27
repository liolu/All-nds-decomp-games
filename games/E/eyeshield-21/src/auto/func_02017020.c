/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_02017194(s32, s16, M2C_UNK);           /* extern */
extern M2C_UNK data_020fb6e0;

void func_02017020(void) {
    s16 temp_r1;
    s32 var_r6;
    void *temp_r0;

    var_r6 = 0;
    if ((s32) M2C_FIELD(&data_020fb6e0, s32 *, 0x158) <= 0) {
        return;
    }
    do {
        temp_r0 = M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020fb6e0 + (var_r6 * 4))), void **, 0x15C);
        if (temp_r0 != NULL) {
            temp_r1 = M2C_FIELD(temp_r0, s16 *, 0xE);
            if ((s32) temp_r1 >= 0) {
                func_02017194(M2C_FIELD(&data_020fb6e0, s32 *, 0xA8), temp_r1, 0x23);
            }
        }
        var_r6 += 1;
    } while (var_r6 < (s32) M2C_FIELD(&data_020fb6e0, s32 *, 0x158));
}
