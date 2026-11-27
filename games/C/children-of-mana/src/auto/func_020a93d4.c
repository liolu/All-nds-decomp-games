/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02042630(M2C_UNK);                         /* extern */
s32 func_0207b230(s32, M2C_UNK);                    /* extern */
M2C_UNK func_020a5eb4(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020d24b0(void *);                      /* extern */
extern M2C_UNK data_02106bf4;

void *func_020a93d4(void *arg0, M2C_UNK arg1) {
    s32 var_r0;
    s32 var_r8;
    void *temp_r1;

    func_020a5eb4(arg0, arg1, 0x20);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02106bf4;
    M2C_FIELD(arg0, s32 *, 0x110)  = -1;
    var_r8                         = 0;
    M2C_FIELD(arg0, s32 *, 0x114)  = 0;
    M2C_FIELD(arg0, s32 *, 0x118)  = 0;
    M2C_FIELD(arg0, s32 *, 0x11C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x120)  = 0;
    M2C_FIELD(arg0, s32 *, 0x130)  = 0;
    M2C_FIELD(arg0, s32 *, 0x134)  = 0;
    M2C_FIELD(arg0, s8 *, 0x164)   = 0;
    M2C_FIELD(arg0, s8 *, 0x165)   = 0;
    do {
        var_r0 = func_0200f270(0x60, 0);
        if (var_r0 != 0) {
            var_r0 = func_0207b230(var_r0, 1);
        }
        temp_r1 = arg0 + (var_r8 * 4);
        var_r8 += 1;
        M2C_FIELD(temp_r1, s32 *, 0x124) = var_r0;
    } while (var_r8 < 3);
    M2C_FIELD(arg0, s32 *, 0x130) = func_02042630(1);
    func_020d24b0(arg0 + 0x138);
    return arg0;
}
