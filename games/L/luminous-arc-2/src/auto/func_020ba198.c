#include "m2c.h"

s32 func_0201b6f4(s32, M2C_UNK *, M2C_UNK);         /* extern */
M2C_UNK func_020b9ee0(s32, s32);                    /* extern */
M2C_UNK func_020b9f90(s32, s32);                    /* extern */
M2C_UNK func_020ba01c(s32, s32);                    /* extern */
M2C_UNK func_020ba100(s32, s32);                    /* extern */
extern M2C_UNK data_0212ecb8;
extern M2C_UNK data_0212ecc4;
extern M2C_UNK data_0212ecd0;
extern M2C_UNK data_0212ecdc;

void func_020ba198(s32 arg0, s32 arg1) {
    *(s8 *) (arg0 + arg1) = 0;
    if (func_0201b6f4(arg0, &data_0212ecb8, 8) == 0) {
        func_020b9ee0(arg0, arg1);
        return;
    }
    if (func_0201b6f4(arg0, &data_0212ecc4, 9) == 0) {
        func_020b9f90(arg0, arg1);
        return;
    }
    if (func_0201b6f4(arg0, &data_0212ecc4, 9) == 0) {
        func_020b9f90(arg0, arg1);
        return;
    }
    if (func_0201b6f4(arg0, &data_0212ecd0, 8) == 0) {
        func_020ba01c(arg0, arg1);
        return;
    }
    if (func_0201b6f4(arg0, &data_0212ecdc, 8) != 0) {
        return;
    }
    func_020ba100(arg0, arg1);
}