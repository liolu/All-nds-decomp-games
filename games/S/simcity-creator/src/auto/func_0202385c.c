#include "m2c.h"

s32 func_020230d0();                                /* extern */
M2C_UNK func_020236c0(void *);                      /* extern */
M2C_UNK func_020240e0(void *);                      /* extern */
s32 func_020348ec(M2C_UNK);                         /* extern */

void func_0202385c(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(0x58);
    if (var_r0 != 0) {
        var_r0 = func_020230d0();
    }
    M2C_FIELD(arg0, s32 *, 0x62EC) = var_r0;
    M2C_FIELD(arg0, s32 *, 4)      = 1;
    M2C_FIELD(arg0, s32 *, 0x74)   = 0;
    M2C_FIELD(arg0, s32 *, 0x44)   = 0;
    M2C_FIELD(arg0, s32 *, 0x48)   = 0;
    M2C_FIELD(arg0, s32 *, 0x4C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x8C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x88)   = 0;
    M2C_FIELD(arg0, s32 *, 0x90)   = 0;
    func_020236c0(arg0);
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 2;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0xFF;
    M2C_FIELD(arg0, s32 *, 0x70) = 0xFF;
    func_020240e0(arg0);
    M2C_FIELD(arg0, s32 *, 0x78)   = 0;
    M2C_FIELD(arg0, s32 *, 0x80)   = 0;
    M2C_FIELD(arg0, s32 *, 0xDC)   = 1;
    M2C_FIELD(arg0, s32 *, 0xE0)   = 1;
    M2C_FIELD(arg0, s32 *, 0x62C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x62CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x62D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x62D4) = 1;
    M2C_FIELD(arg0, s32 *, 0x62D8) = 0;
    M2C_FIELD(arg0, s32 *, 0x62DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x62E0) = 1;
    M2C_FIELD(arg0, s32 *, 0x6300) = 0;
    M2C_FIELD(arg0, s32 *, 0x6308) = 0;
    M2C_FIELD(arg0, s32 *, 0x6304) = 0;
    M2C_FIELD(arg0, s32 *, 0x630C) = 0;
    M2C_FIELD(arg0, s8 *, 0x6310)  = 0;
}
