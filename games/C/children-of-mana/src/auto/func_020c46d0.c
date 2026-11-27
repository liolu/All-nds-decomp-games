/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02079030(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0207b230(s32, M2C_UNK);                    /* extern */
M2C_UNK func_020a1494(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_020a4030();                                /* extern */
extern M2C_UNK data_021099a0;

void *func_020c46d0(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;

    func_020a1494(arg0, 0x25, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021099a0;
    M2C_FIELD(arg0, s32 *, 0xC0)   = 0;
    M2C_FIELD(arg0, s32 *, 0xC4)   = 0;
    M2C_FIELD(arg0, s32 *, 0xC8)   = 0;
    M2C_FIELD(arg0, s32 *, 0xCC)   = -1;
    M2C_FIELD(arg0, s32 *, 0xC0)   = func_02079030(1, 1, 0xA);
    var_r0                         = func_0200f270(0x60, 0);
    if (var_r0 != 0) {
        var_r0 = func_0207b230(var_r0, 1);
    }
    M2C_FIELD(arg0, s32 *, 0xC4) = var_r0;
    var_r0_2                     = func_0200f270(0x13C, 0);
    if (var_r0_2 != 0) {
        var_r0_2 = func_020a4030();
    }
    M2C_FIELD(arg0, s32 *, 0xC8) = var_r0_2;
    return arg0;
}
