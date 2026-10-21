#include "m2c.h"

M2C_UNK func_0205e6a8(s32);                         /* extern */
extern M2C_UNK data_020a74c4;

void func_0202df64(s32 arg0) {
    s32 temp_r0;

    temp_r0 = *((M2C_UNK *) ((s8 *) &data_020a74c4 + (arg0 * 4)));
    if (temp_r0 == 0) {
        return;
    }
    func_0205e6a8(temp_r0 + 0x1C);
    func_0205e6a8(*((M2C_UNK *) ((s8 *) &data_020a74c4 + (arg0 * 4))) + 0x20);
    M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_020a74c4 + (arg0 * 4))), s32 *, 0x10) = 1;
}
