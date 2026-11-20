#include "m2c.h"

M2C_UNK func_020014fc(s32, s32);                    /* extern */
M2C_UNK func_02002a00(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0200675c();                            /* extern */
s32 func_0205369c(s32);                             /* extern */
M2C_UNK func_020536e8(s32, M2C_UNK);                /* extern */
M2C_UNK func_020ae428();                            /* extern */
M2C_UNK func_020ae68c(s32, s32);                    /* extern */
M2C_UNK func_020af078();                            /* extern */
M2C_UNK func_020af280();                            /* extern */
M2C_UNK func_020af394();                            /* extern */
extern M2C_UNK data_02162de0;

void func_020ae9fc(void) {
    s32 var_r9;

    func_020af078();
    if (M2C_FIELD(&data_02162de0, s32 *, 0x18) == 1) {
        func_020536e8(M2C_FIELD(&data_02162de0, s32 *, 0x10), 1);
    }
    func_020af394();
    if (M2C_FIELD(&data_02162de0, s32 *, 0x18) == 1) {
        func_020ae68c(func_0205369c(M2C_FIELD(&data_02162de0, s32 *, 0x10)), 0x1003);
    }
    var_r9 = 0;
    do {
        func_020014fc(0x0400006C, var_r9);
        func_02002a00(0x04001050, 0x3F, var_r9);
        func_0200675c();
        func_0205369c(M2C_FIELD(&data_02162de0, s32 *, 0x10));
        func_020ae428();
        var_r9 -= 1;
    } while (var_r9 >= -0x10);
    func_020af280();
}
