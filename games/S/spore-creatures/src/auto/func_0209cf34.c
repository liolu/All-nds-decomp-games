#include "m2c.h"

M2C_UNK func_02093234(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020e9378;
extern M2C_UNK data_020e9778;

void func_0209cf34(s32 arg0) {
    func_02093234((M2C_UNK *) ((s8 *) &data_020e9378 + (arg0 << 9)), 0, 0x200, 8);
    func_02093234((M2C_UNK *) ((s8 *) &data_020e9778 + (arg0 << 9)), 0xFF, 0x200, 8);
}
