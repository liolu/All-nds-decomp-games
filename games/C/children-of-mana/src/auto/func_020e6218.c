/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205a294();       /* extern */
M2C_UNK func_0205a328();       /* extern */
s32 func_0206053c(); /* extern */
extern M2C_UNK _Z16unkfunc_02081728i;

void func_020e6218(void *arg0, M2C_UNK arg1) {
    s32 var_r0;

    func_0205a294(arg0 + 0x3E4, 0, 9);
    func_0205a328(arg0 + 0x3E4, arg1, 4);
    if (func_0206053c(M2C_FIELD(arg0, u16 *, 0xE0), arg0 + 0x3E4, 9, &_Z16unkfunc_02081728i) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        M2C_FIELD(arg0, s32 *, 0) = 7;
    }
}
