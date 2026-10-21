#include "m2c.h"

M2C_UNK func_0205d6b8(u8, M2C_UNK);                 /* extern */
extern M2C_UNK data_0216bdb0;

void func_0205d688(s32 arg0) {
    void *temp_r4;

    if (arg0 < 1) {
        return;
    }
    temp_r4 = *((M2C_UNK *) ((s8 *) &data_0216bdb0 + (arg0 * 4)));
    func_0205d6b8((u8) arg0, 1);
    M2C_FIELD(temp_r4, s32 *, 0x10) = 1;
}
