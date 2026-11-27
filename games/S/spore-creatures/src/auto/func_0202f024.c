#include "m2c.h"

M2C_UNK func_02005c10();                            /* extern */
M2C_UNK func_02005e9c(M2C_UNK);                     /* extern */
s32 func_0202e914(s32);                             /* extern */
M2C_UNK func_02067944();                            /* extern */
extern void *data_020e0ba0;
extern s32 data_027e05e8;

void func_0202f024(M2C_UNK arg0, s32 arg1) {
    s32 var_r4;

    data_027e05e8 |= 0x800;
    var_r4 = 0;
    if (func_0202e914(M2C_FIELD(data_020e0ba0, s32 *, 4)) != 0) {
        if (arg1 != 0) {
            func_02067944();
        }
        var_r4 = arg1;
        func_02005c10();
    }
    if ((arg1 != 0) && (var_r4 == 0)) {
        func_02067944();
    }
    func_02005e9c(arg0);
    data_027e05e8 &= ~0x800;
}
