#include "m2c.h"

M2C_UNK func_020014fc(s32, s32);                    /* extern */
M2C_UNK func_02002a00(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0200675c();                            /* extern */
M2C_UNK func_020aec24(M2C_UNK);                     /* extern */
M2C_UNK func_020af304(M2C_UNK *);                   /* extern */
M2C_UNK func_020af4c0(M2C_UNK);                     /* extern */
extern M2C_UNK func_020af448;

void func_020ae990(M2C_UNK arg0) {
    s32 var_r7;

    func_020af4c0(0);
    func_020aec24(arg0);
    var_r7 = -0x10;
    do {
        func_020014fc(0x0400006C, var_r7);
        func_02002a00(0x04001050, 0x3F, var_r7);
        func_0200675c();
        var_r7 += 1;
    } while (var_r7 <= 0);
    func_020af304(&func_020af448);
}
