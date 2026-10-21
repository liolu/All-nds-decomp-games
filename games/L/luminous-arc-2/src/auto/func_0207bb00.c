#include "m2c.h"

M2C_UNK func_02005aac(s32, M2C_UNK);                /* extern */
M2C_UNK func_020075b0(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_02095574(M2C_UNK);                         /* extern */
u8 func_0207bba8();                                 /* extern */
M2C_UNK func_0207dd74(s32, void *);                 /* extern */
extern M2C_UNK data_0217024c;

void func_0207bb00(s32 arg0) {
    s32 temp_r0;
    s32 var_r1;
    s8 temp_r0_2;
    u8 var_r2;
    void *var_r2_2;

    var_r2 = M2C_FIELD(M2C_FIELD(&data_0217024c, void **, 0xC), u8 *, 0x22);
    if (var_r2 == 0) {
        var_r2 = func_0207bba8(arg0);
    }
    M2C_FIELD(M2C_FIELD(&data_0217024c, void **, 0xC), u8 *, 0x17) = var_r2;
    temp_r0                                                        = func_02095574(0);
    if (temp_r0 != 0) {
        func_02005aac(temp_r0, 0x20);
        func_0207dd74(temp_r0, M2C_FIELD(&data_0217024c, void **, 0xC) + 0x18);
    }
    var_r1   = 0;
    var_r2_2 = M2C_FIELD(&data_0217024c, void **, 0xC);
loop_5:
    temp_r0_2 = M2C_FIELD(var_r2_2, s8 *, 0x18);
    if (((s32) temp_r0_2 < 0x20) || ((s32) temp_r0_2 > 0x7E)) {
        func_020075b0(M2C_FIELD(&data_0217024c, void **, 0xC) + 0x18, 0, 0xA);
        return;
    }
    var_r1 += 1;
    var_r2_2 += 1;
    if (var_r1 >= 0xA) {
        return;
    }
    goto loop_5;
}
