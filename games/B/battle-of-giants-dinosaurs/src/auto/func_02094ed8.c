#include "m2c.h"

M2C_UNK func_02094f3c(s32);                         /* extern */
M2C_UNK func_02094fa4(s32);                         /* extern */
M2C_UNK func_0209500c(s32);                         /* extern */
M2C_UNK func_0209af64(s32);                         /* extern */
extern M2C_UNK data_020d3cc4;

s32 func_02094ed8(s32 arg0) {
    func_02094f3c(arg0 + 4);
    func_02094f3c(arg0 + 0x18);
    func_02094f3c(arg0 + 0x2C);
    func_02094f3c(arg0 + 0x40);
    func_02094fa4(arg0 + 0x54);
    func_02094fa4(arg0 + 0x68);
    func_0209500c(arg0 + 0x80);
    func_0209500c(arg0 + 0x94);
    M2C_FIELD(&data_020d3cc4, s32 *, 0x18) = arg0;
    func_0209af64(arg0);
    return arg0;
}
