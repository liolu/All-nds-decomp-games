#include "m2c.h"

M2C_UNK func_02019f88();                            /* extern */
M2C_UNK func_0205cf48(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020a7508;

void func_0202eb2c(M2C_UNK arg0, s32 arg1) {
    void *temp_r1;

    if (arg1 >= 0x14) {
        func_02019f88();
    }
    temp_r1 = *((M2C_UNK *) ((s8 *) &data_020a7508 + (arg1 * 4)));
    if ((temp_r1 != NULL) && (M2C_FIELD(temp_r1, s32 *, 0x28) != 0)) {
        func_0205cf48(M2C_FIELD(temp_r1, s32 *, 0x24), arg0);
    }
}
