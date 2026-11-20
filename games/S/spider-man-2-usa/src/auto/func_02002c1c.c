/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204cf64(void *, s32, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_021000b0;

void func_02002c1c(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_r1;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x2F4);
    temp_r1 = *((M2C_UNK *) ((s8 *) &data_021000b0 + (arg1 * 4)));
    if (M2C_FIELD(temp_r0, s32 *, 0x8C) == temp_r1) {
        return;
    }
    func_0204cf64(temp_r0, temp_r1, arg3, arg2);
}
