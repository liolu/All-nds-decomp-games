#include "m2c.h"

s32 func_020230d0();                                /* extern */
M2C_UNK func_0202312c(s32, M2C_UNK *, void **, M2C_UNK, s32); /* extern */
s32 func_020348ec(M2C_UNK);                         /* extern */
extern M2C_UNK data_020cec5c;

void func_0208fba8(void *arg0, s32 arg1) {
    void *sp4;
    s32 var_r0;

    var_r0 = func_020348ec(0x58);
    if (var_r0 != 0) {
        var_r0 = func_020230d0();
    }
    M2C_FIELD(arg0, s32 *, 4)     = var_r0;
    M2C_FIELD(arg0, s32 *, 8)     = 0;
    M2C_FIELD(arg0, s8 *, 0xC)    = 0;
    M2C_FIELD(arg0, s16 *, 0xE)   = 0;
    M2C_FIELD(arg0, s8 *, 0x10)   = 4;
    M2C_FIELD(arg0, s32 *, 0x14)  = 0;
    M2C_FIELD(arg0, s32 *, 0x81C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x818) = 0;
    M2C_FIELD(arg0, s32 *, 0x820) = 0;
    sp4                           = arg0 + 0x18;
    func_0202312c(M2C_FIELD(arg0, s32 *, 4), &data_020cec5c, &sp4, 0x28, 0x800);
}
