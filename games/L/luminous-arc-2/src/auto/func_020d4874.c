#include "m2c.h"

s32 func_020cab60();                                /* extern */
M2C_UNK func_020ccda8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32,
                      s32); /* extern */
extern M2C_UNK data_0216ce68;

void func_020d4874(void) {
    if (func_020cab60() != 3) {
        return;
    }
    func_020ccda8(3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 6, 2, 6, 1, 4, 0, 1, 0, 1);
    M2C_FIELD(&data_0216ce68, s8 *, 0xBAA) = 1;
}
