#include "m2c.h"

M2C_UNK func_02095110(s32);                         /* extern */
M2C_UNK func_0209798c(s32);                         /* extern */
M2C_UNK func_02098f80(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_020d3cc4;

s32 func_020950c8(s32 arg0) {
    func_02098f80(arg0, 0, 0);
    func_02095110(arg0 + 0x60);
    func_02095110(arg0 + 0x174);
    func_02095110(arg0 + 0x288);
    M2C_FIELD(&data_020d3cc4, s32 *, 4) = arg0;
    func_0209798c(arg0);
    return arg0;
}
