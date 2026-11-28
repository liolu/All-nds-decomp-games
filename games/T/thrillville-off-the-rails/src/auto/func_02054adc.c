#include "m2c.h"

M2C_UNK func_0202e100(s32);                         /* extern */
M2C_UNK func_020416e4(s32);                         /* extern */
M2C_UNK func_02064538(M2C_UNK *, s32, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020efeb8;

s32 func_02054adc(s32 arg0) {
    func_0202e100(arg0 + 0x3C);
    func_0202e100(arg0 + 0x38);
    func_0202e100(arg0 + 0x34);
    func_0202e100(arg0 + 0x30);
    func_020416e4(arg0);
    func_02064538(&data_020efeb8, arg0, 0xC4, 0xC4);
    return arg0;
}
