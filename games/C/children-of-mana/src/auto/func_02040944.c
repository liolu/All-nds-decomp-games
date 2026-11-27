/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001dfc(); /* extern */
s32 func_0200fa1c();                                /* extern */
s32 func_0200fa7c();          /* extern */
s32 func_0200fc98(); /* extern */
M2C_UNK func_0205bba4();                /* extern */
extern M2C_UNK data_020fe344;

s32 func_02040944(M2C_UNK arg0, s32 *arg1, s32 arg2, s32 arg3, u8 arg4) {
    M2C_UNK saved_reg_r4;
    u8 sp4[132];
    s32 var_r4;

    var_r4 = saved_reg_r4;
    func_02001dfc(sp4, &data_020fe344, arg0);
    switch (arg3) {                                 /* irregular */
        case 1:
            var_r4 = func_0200fc98(sp4, arg4, 5, arg1, 0);
            func_0205bba4(*arg1, 0x10);
            break;
        case 8:
            var_r4 = func_0200fa7c(sp4, arg4, 0);
            *arg1  = func_0200fa1c() + 0x44;
            func_0205bba4(*arg1, 0x10);
            break;
    }
    return var_r4;
}
