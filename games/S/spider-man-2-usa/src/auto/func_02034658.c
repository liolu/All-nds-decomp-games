/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201a758();                            /* extern */
M2C_UNK func_0201fa80(s32);                         /* extern */
M2C_UNK func_0203444c();                            /* extern */
M2C_UNK func_02034510();                            /* extern */
M2C_UNK func_0204c8cc(s32, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_0204cd18();                                /* extern */
extern M2C_UNK data_02087904;

void func_02034658(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 0:
            func_0203444c();
            return;
        case 1:
            func_0204c8cc(func_0204cd18(), &data_02087904, 0);
            func_0201fa80(arg0 + 0x80);
            return;
        case 2:
            func_02034510();
            return;
        default:
            func_0201a758();
            return;
    }
}
