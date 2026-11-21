#include "m2c.h"

M2C_UNK func_02094f6c(s32);                         /* extern */
M2C_UNK func_02094fd4(s32);                         /* extern */
M2C_UNK func_02095030(s32);                         /* extern */
M2C_UNK func_0209bca0();                            /* extern */

s32 func_02095074(s32 arg0) {
    func_0209bca0();
    func_02095030(arg0 + 0x94);
    func_02095030(arg0 + 0x80);
    func_02094fd4(arg0 + 0x68);
    func_02094fd4(arg0 + 0x54);
    func_02094f6c(arg0 + 0x40);
    func_02094f6c(arg0 + 0x2C);
    func_02094f6c(arg0 + 0x18);
    func_02094f6c(arg0 + 4);
    return arg0;
}
