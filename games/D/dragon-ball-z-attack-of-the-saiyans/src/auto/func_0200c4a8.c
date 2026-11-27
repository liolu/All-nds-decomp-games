#include "m2c.h"

M2C_UNK func_0200d418();                            /* extern */
s32 func_0200e29c();                                /* extern */
M2C_UNK func_0200f014(s32, s32);                    /* extern */
extern void *data_0209b240;
extern M2C_UNK data_020af1ec;
extern u8 data_020b0c18;

void func_0200c4a8(void) {
    s32 temp_r0;
    s32 temp_r1;
    s32 var_r6;
    u8 *var_r7;
    u8 temp_r0_2;
    void *temp_r0_3;

    M2C_FIELD((void *) 0x04000440, s32 *, 0)    = 3;
    M2C_FIELD((void *) 0x04000440, s32 *, 0x14) = 0;
    M2C_FIELD((void *) 0x04000440, s32 *, 0)    = 1;
    func_0200d418();
    temp_r0 = func_0200e29c();
    var_r6  = 0;
    if (temp_r0 <= 0) {
        return;
    }
    var_r7 = &data_020b0c18;
    do {
        temp_r0_2 = *var_r7;
        var_r7 += 1;
        temp_r1       = temp_r0_2 * 0xC;
        temp_r0_3     = *((M2C_UNK *) ((s8 *) &data_020af1ec + temp_r1));
        data_0209b240 = temp_r0_3;
        func_0200f014(M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020af1ec + temp_r1)), s32 *, 4), *M2C_FIELD(temp_r0_3, s32 **, 4));
        var_r6 += 1;
    } while (var_r6 < temp_r0);
}
