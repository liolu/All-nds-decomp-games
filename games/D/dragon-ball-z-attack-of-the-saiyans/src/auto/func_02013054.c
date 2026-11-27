#include "m2c.h"

M2C_UNK func_020033cc(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_020082c0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_0201b920();                                /* extern */
s32 func_0202a740();                                /* extern */
M2C_UNK func_0202a74c();                            /* extern */
M2C_UNK func_0202a760(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02053504(s32);                         /* extern */
extern M2C_UNK data_0209b698;

void func_02013054(s32 arg0) {
    u8 sp0[256];
    s32 var_r4;
    s32 var_r4_2;

    var_r4 = arg0;
    func_0202a740();
    func_0202a74c();
    if (var_r4 == 0) {
        var_r4 = func_0201b920();
    }
    func_020033cc(sp0, &data_0209b698, var_r4);
    func_020082c0(sp0, 0x02200000, -1);
    func_0202a760(func_0202a740(), 0x02200000, 0);
    var_r4_2 = 0;
    do {
        func_02053504(var_r4_2 + 1);
        var_r4_2 += 1;
    } while (var_r4_2 < 9);
}
