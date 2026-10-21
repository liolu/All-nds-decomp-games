#include "m2c.h"

s32 func_02015ffc();                                /* extern */
M2C_UNK func_02016044(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_02019d04();                                /* extern */
M2C_UNK func_02019d18(s32);                         /* extern */
extern s32 data_02094044;

void func_020161a8(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02019d04();
    if (func_02015ffc() != 0) {
        func_02016044(data_02094044 + 0xC4, 0, arg0, 0);
    }
    func_02019d18(temp_r4);
}
