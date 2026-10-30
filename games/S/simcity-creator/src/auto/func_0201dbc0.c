#include "m2c.h"

M2C_UNK func_02006ee8();       /* extern */
M2C_UNK func_02021720();               /* extern */
s32 func_0204638c();                                /* extern */
s32 func_02053114();                         /* extern */
M2C_UNK func_020537ec();                         /* extern */

void func_0201dbc0(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_02053114(arg1);
    func_020537ec();
    func_02006ee8(func_0204638c(), 0, 0x8000);
    func_020537ec(temp_r4);
    func_02021720(arg0, func_0204638c(), arg0 + 0x76);
}
