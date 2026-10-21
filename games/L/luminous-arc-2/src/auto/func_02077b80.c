#include "m2c.h"

M2C_UNK func_020ccda8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32,
                      s32); /* extern */
extern M2C_UNK data_02158048;

void func_02077b80(void) {
    func_020ccda8(3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 7, 2, 6, 1, 4, 0, 1, 0, 0);
    M2C_FIELD(&data_02158048, u8 *, 1) = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
}
