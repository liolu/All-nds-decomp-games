#include "m2c.h"

M2C_UNK func_02007a8c();                            /* extern */
M2C_UNK func_02008b78(M2C_UNK);                     /* extern */
M2C_UNK func_02009310(s32, u8, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_02009400(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02009530(M2C_UNK);                     /* extern */
extern M2C_UNK data_0209f538;
extern M2C_UNK data_0209f53c;
extern void *data_020d1d24;

void func_020700ec(void) {
    M2C_UNK *var_r2;
    s32 var_r0;
    u8 temp_r4;
    u8 temp_r5;

    temp_r5                                = M2C_FIELD(data_020d1d24, u8 *, 0x4348);
    temp_r4                                = M2C_FIELD(data_020d1d24, u8 *, 0x434B);
    M2C_FIELD(data_020d1d24, u8 *, 0x4348) = (u8) (temp_r5 + 1);
    func_02008b78(1);
    func_02009400(0, temp_r4, 0x100, 0x10, 0);
    var_r0 = temp_r5 & 0x3F;
    if (temp_r5 & 0x40) {
        var_r2 = &data_0209f538;
        var_r0 = 0x40 - var_r0;
    } else {
        var_r2 = &data_0209f53c;
    }
    func_02009310(var_r0 + 0x60, temp_r4, var_r2, 0xFF);
    func_02009530(-1);
    func_02007a8c();
}
