#include "m2c.h"

M2C_UNK func_02001bb8(s32, s32);                    /* extern */
M2C_UNK func_02043980(M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
extern s32 data_020e0ba0;

void func_02051708(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg1 == 0) {
        func_02001bb8(data_020e0ba0 + 0xC, 0x0E188997);
    }
    func_02043980(arg0, arg1, arg2, arg3);
}
