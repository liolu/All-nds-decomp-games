#include "m2c.h"

M2C_UNK func_0201c5dc();                            /* extern */
M2C_UNK func_0201d0c8();                            /* extern */
s32 func_02021600();                                /* extern */
s32 func_02045f5c();                                /* extern */
s32 func_02045f6c();                                /* extern */
M2C_UNK func_020470e8(s32, M2C_UNK);                /* extern */
s32 func_02047c9c(s32);                             /* extern */
s32 func_0205369c(M2C_UNK);                         /* extern */
M2C_UNK func_020536c8(M2C_UNK);                     /* extern */
M2C_UNK func_020536d8(M2C_UNK);                     /* extern */
M2C_UNK func_020537e0(M2C_UNK);                     /* extern */
M2C_UNK func_020537f8(M2C_UNK);                     /* extern */
M2C_UNK func_0206f1d0(void *, M2C_UNK);             /* extern */
M2C_UNK func_020ae888(s32, s32);                    /* extern */
M2C_UNK func_020ae8bc(s32, s32);                    /* extern */
M2C_UNK func_020b1090();                            /* extern */

void func_0206ec0c(void *arg0, M2C_UNK arg1) {
    s32 temp_r4;
    s32 temp_r4_2;

    func_020536c8(arg1);
    func_0201c5dc();
    func_020536d8(arg1);
    func_020b1090();
    func_020470e8(M2C_FIELD(arg0, s32 *, 8), arg1);
    if (func_02047c9c(M2C_FIELD(arg0, s32 *, 8)) == 0) {
        return;
    }
    temp_r4 = func_0205369c(arg1);
    func_020537e0(arg1);
    func_020ae888(temp_r4, func_02045f5c());
    temp_r4_2 = func_0205369c(arg1);
    func_020537e0(arg1);
    func_020ae8bc(temp_r4_2, func_02045f6c());
    func_020537f8(arg1);
    if (func_02021600() & 1) {
        func_0206f1d0(arg0, 2);
        func_020537f8(arg1);
        func_0201d0c8();
        return;
    }
    func_0206f1d0(arg0, 0xB);
}
