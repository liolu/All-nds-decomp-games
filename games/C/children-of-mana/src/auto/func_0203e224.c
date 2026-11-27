/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK _Z10SeedRandomj(M2C_UNK);                   /* extern */
s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0200f640(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_0200f6f8();                            /* extern */
M2C_UNK func_020113f0();                            /* extern */
M2C_UNK func_02011bc4();                            /* extern */
M2C_UNK func_0203351c();                            /* extern */
M2C_UNK func_0203dbcc();                            /* extern */
M2C_UNK func_0203dcb8();                            /* extern */
M2C_UNK func_0203df74();                            /* extern */
M2C_UNK func_0207cb84();                            /* extern */
M2C_UNK func_020914c4();                            /* extern */
M2C_UNK func_020923f0();                            /* extern */
M2C_UNK func_020a1a34();                            /* extern */
s32 func_020cd8d8(s32, M2C_UNK);                    /* extern */
s32 func_020dd854();                                /* extern */
M2C_UNK func_020e96fc();                            /* extern */

void func_0203e224(void) {
    s32 temp_r0;
    s32 var_r2;
    s32 var_r2_2;

    func_0203df74();
    func_0203dcb8();
    func_0207cb84();
    func_0203351c();
    func_0203dbcc();
    func_0200f6f8();
    func_02011bc4();
    func_020113f0();
    func_020914c4();
    func_020923f0();
    func_020a1a34();
    func_020e96fc();
    _Z10SeedRandomj(0);
    temp_r0 = func_0200f270(0x6C, 0);
    var_r2  = temp_r0;
    if (var_r2 != 0) {
        var_r2 = func_020cd8d8(temp_r0, 0);
    }
    func_0200f640(0, 0, var_r2);
    var_r2_2 = func_0200f270(0x2C, 1);
    if (var_r2_2 != 0) {
        var_r2_2 = func_020dd854();
    }
    func_0200f640(0, 0, var_r2_2);
}
