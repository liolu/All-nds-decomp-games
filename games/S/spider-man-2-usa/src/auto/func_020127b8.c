/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02012ac4(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020150b4(M2C_UNK *);                   /* extern */
s32 func_020199c4(s32);                             /* extern */
s32 func_0202e6a0();                                /* extern */
M2C_UNK func_0202e73c(s32, M2C_UNK *);              /* extern */
extern M2C_UNK data_0215b3d4;

void func_020127b8(M2C_UNK arg0, s32 arg1) {
    M2C_FIELD(&data_0215b3d4, s32 *, 8) = arg1;
    func_020199c4(arg1);
    if (func_0202e6a0() != 0) {
        func_020150b4(&data_0215b3d4);
    } else {
        func_0202e73c(func_020199c4(arg1), &data_0215b3d4);
    }
    func_02012ac4(arg0, 0, 1);
}
