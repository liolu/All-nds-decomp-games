#include "m2c.h"

M2C_UNK func_02034a08(s32);                         /* extern */
M2C_UNK func_020353a4(s32);                         /* extern */
M2C_UNK func_02055fdc(s32);                         /* extern */

void func_02058fac(s32 arg0) {
    func_02055fdc(arg0 + 0x60);
    func_020353a4(arg0 + 0x5C);
    func_02034a08(arg0);
}
