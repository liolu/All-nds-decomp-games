#include "m2c.h"

M2C_UNK func_02055ed0(s32, s32, M2C_UNK *);         /* extern */
extern M2C_UNK data_020cc688;
extern M2C_UNK data_020cc6a8;
extern M2C_UNK data_020cc6c8;
extern M2C_UNK data_020cc6e8;

void func_02055f34(s32 arg0) {
    func_02055ed0(arg0, arg0 + 0x20, &data_020cc688);
    func_02055ed0(arg0, arg0 + 0x2C, &data_020cc6a8);
    func_02055ed0(arg0, arg0 + 0x38, &data_020cc6c8);
    func_02055ed0(arg0, arg0 + 0x44, &data_020cc6e8);
}
