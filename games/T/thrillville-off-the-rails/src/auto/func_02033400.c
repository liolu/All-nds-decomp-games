#include "m2c.h"

M2C_UNK func_02007fa8(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02008104();                            /* extern */
M2C_UNK func_02008e90(void *);                      /* extern */
M2C_UNK func_02008eec(void *, void *);              /* extern */
M2C_UNK func_02008efc(s32);                         /* extern */
M2C_UNK func_02009fe4(void *, M2C_UNK, M2C_UNK *);  /* extern */
M2C_UNK func_0200cd78(void *, M2C_UNK);             /* extern */
extern M2C_UNK func_020332b0;
extern M2C_UNK func_0203338c;
extern M2C_UNK func_020333f4;

void func_02033400(void *arg0) {
    s32 var_r7;
    void *var_r8;
    void *var_r9;

    func_02008104();
    func_02007fa8(arg0 + 0x924, 0, 0x80, 0);
    func_02007fa8(arg0 + 0x940, 0, 0x80, 1);
    func_02008efc(arg0 + 0x295C);
    var_r7 = 0;
    var_r9 = arg0;
    var_r8 = arg0 + 0x29F4;
    do {
        func_02008e90(var_r8);
        M2C_FIELD(var_r8, s32 *, 0)           = 0;
        M2C_FIELD(var_r8, s32 *, 4)           = 0;
        M2C_FIELD(var_r8, s32 *, 8)           = 0x100000;
        M2C_FIELD(var_r8, s32 *, 0xC)         = 0xC0000;
        M2C_FIELD(var_r9, M2C_UNK **, 0x2A1C) = &func_020332b0;
        M2C_FIELD(var_r9, M2C_UNK **, 0x2A20) = &func_0203338c;
        M2C_FIELD(var_r9, s32 *, 0x2A08)      = (s32) (var_r7 + 1);
        func_02008eec(arg0 + 0x295C, var_r8);
        var_r7 += 1;
        var_r8 += 0x48;
        var_r9 += 0x48;
    } while (var_r7 < 2);
    M2C_FIELD(arg0, s32 *, 0x29DC) = -0x1000;
    func_0200cd78(arg0 + 0x95C, 0x80);
    func_02009fe4(arg0 + 0x115C, 0x80, &func_020333f4);
    M2C_FIELD((void *) 0x04000000, s32 *, 0) = (s32) ((M2C_FIELD((void *) 0x04000000, s32 *, 0) & 0xFFCFFFEF) | 0x10);
    M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) =
        (s32) ((M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) & 0xFFCFFFEF) | 0x10);
}
