#include "m2c.h"

M2C_UNK func_02014050(M2C_UNK, M2C_UNK *, s32, s32, s32); /* extern */
s32 func_020b137c(s32);                             /* extern */
extern M2C_UNK data_020be890;
extern M2C_UNK data_020be8b0;
extern M2C_UNK data_020c8200;

void func_02023084(M2C_UNK arg0, s32 arg1) {
    s32 temp_r4;
    void *temp_r6;

    temp_r4 = *((M2C_UNK *) ((s8 *) &data_020be8b0 + (arg1 * 4)));
    temp_r6 = (M2C_UNK *) ((s8 *) &data_020be890 + (temp_r4 * 0x10));
    func_02014050(arg0, &data_020c8200, *((M2C_UNK *) ((s8 *) &data_020be890 + (temp_r4 * 0x10))), func_020b137c(arg1),
                  M2C_FIELD(temp_r6, s32 *, 4));
}
