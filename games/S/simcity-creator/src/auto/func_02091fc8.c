#include "m2c.h"

s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_020538dc();                                /* extern */
s32 func_02053d30(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0206fff0(s32);                         /* extern */
s32 func_02070134(s32);                             /* extern */
M2C_UNK func_0209218c(void *);                      /* extern */
M2C_UNK func_02093ee8(void *);                      /* extern */
M2C_UNK func_02093f0c(void *);                      /* extern */
M2C_UNK func_020940e4(void *);                      /* extern */
M2C_UNK func_020950b4(void *);                      /* extern */
M2C_UNK func_02095164(void *);                      /* extern */
s32 func_02098e48();                                /* extern */
M2C_UNK func_02098e70();                            /* extern */

s32 func_02091fc8(void *arg0, s32 arg1) {
    s32 var_r0;

    M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
    M2C_FIELD(arg0, s32 *, 0xC)  = 1;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s8 *, 0x8A0) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    M2C_FIELD(arg0, s8 *, 0x1E)  = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s8 *, 0x1F)  = 1;
    M2C_FIELD(arg0, s8 *, 0x36)  = 0;
    M2C_FIELD(arg0, s16 *, 0x3A) = 0;
    M2C_FIELD(arg0, s16 *, 0x3C) = 0;
    M2C_FIELD(arg0, s16 *, 0x3E) = 0;
    M2C_FIELD(arg0, s16 *, 0x40) = 0;
    M2C_FIELD(arg0, s8 *, 0x42)  = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s8 *, 0x58)  = 0;
    M2C_FIELD(arg0, s8 *, 0x59)  = 0xE;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s8 *, 0x64)  = 0;
    M2C_FIELD(arg0, s8 *, 0x65)  = 0;
    M2C_FIELD(arg0, s8 *, 0x66)  = 1;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s16 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s16 *, 0x88) = 0;
    M2C_FIELD(arg0, s8 *, 0x8A0) = 0;
    M2C_FIELD(arg0, s16 *, 0x8A) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    M2C_FIELD(arg0, s8 *, 0x8B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    if (func_02070134(arg1) != 0) {
        M2C_FIELD(arg0, s32 *, 0x94) = 1;
    }
    func_0206fff0(arg1);
    if (func_02053d30(func_020538dc(), 0x77) != 0) {
        M2C_FIELD(arg0, s32 *, 0x98) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x9C)  = 0;
    M2C_FIELD(arg0, s32 *, 0xA0)  = 0;
    M2C_FIELD(arg0, s16 *, 0xA4)  = 0;
    M2C_FIELD(arg0, s32 *, 0xA8)  = 0;
    M2C_FIELD(arg0, s32 *, 0xAC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x8B0) = 0;
    M2C_FIELD(arg0, s8 *, 0x8B9)  = 0;
    M2C_FIELD(arg0, s8 *, 0x8BA)  = 0;
    M2C_FIELD(arg0, s8 *, 0x8BB)  = 0;
    M2C_FIELD(arg0, s32 *, 4)     = 0;
    M2C_FIELD(arg0, s32 *, 0x120) = 0;
    var_r0                        = func_020348ec(0xE0);
    if (var_r0 != 0) {
        var_r0 = func_02098e48();
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r0;
    func_02098e70();
    func_02093f0c(arg0);
    func_02093ee8(arg0);
    M2C_FIELD(arg0, s16 *, 0x126) = 0;
    M2C_FIELD(arg0, s8 *, 0x11C)  = 0;
    M2C_FIELD(arg0, s32 *, 0xEEC) = 0;
    func_020940e4(arg0);
    M2C_FIELD(arg0, s8 *, 0x8A0)  = 0;
    M2C_FIELD(arg0, s32 *, 0x8A4) = 0;
    M2C_FIELD(arg0, s8 *, 0x8AC)  = 0;
    func_0209218c(arg0);
    func_020950b4(arg0);
    M2C_FIELD(arg0, s8 *, 0x119) = 2;
    M2C_FIELD(arg0, s8 *, 0x11A) = 1;
    func_02095164(arg0);
    M2C_FIELD(arg0, s8 *, 0xEF8)         = 0;
    M2C_FIELD(arg0, s8 *, 0xEF9)         = 0;
    M2C_FIELD(arg0, s8 *, 0xEFA)         = 0;
    return M2C_FIELD(arg0, s32 *, 0xEFC) = 0;
}
