/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK NNS_FndGetAllocatableSizeForExpHeapEx(s32, M2C_UNK); /* extern */
M2C_UNK func_02027bb4();                            /* extern */
s32 func_0207cf10(s32, M2C_UNK, M2C_UNK, s32);      /* extern */
M2C_UNK func_0207d1a8(s32, s32);                    /* extern */
extern M2C_UNK data_02110388;

void func_0207cd58(void) {
    s32 temp_r6;
    s32 var_r5;
    void *temp_r0;

    var_r5 = 0;
    do {
        temp_r0 = *((M2C_UNK *) ((s8 *) &data_02110388 + (var_r5 * 4)));
        if (temp_r0 != NULL) {
            NNS_FndGetAllocatableSizeForExpHeapEx(M2C_FIELD(temp_r0, s32 *, 0x1C), 4);
            temp_r6 = func_0207cf10(*((M2C_UNK *) ((s8 *) &data_02110388 + (var_r5 * 4))), 0x10, 8, 0);
            func_02027bb4();
            func_0207d1a8(*((M2C_UNK *) ((s8 *) &data_02110388 + (var_r5 * 4))), temp_r6);
        }
        var_r5 += 1;
    } while (var_r5 < 0xF);
}
