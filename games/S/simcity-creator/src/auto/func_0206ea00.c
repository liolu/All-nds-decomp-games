#include "m2c.h"

M2C_UNK func_02001fdc(M2C_UNK);                     /* extern */
M2C_UNK func_02002084(M2C_UNK);                     /* extern */
M2C_UNK func_02002228();                            /* extern */
M2C_UNK func_0200223c();                            /* extern */
M2C_UNK func_02002298();                            /* extern */
M2C_UNK func_020022ac();                            /* extern */
M2C_UNK func_020022d4();                            /* extern */
M2C_UNK func_020022e8();                            /* extern */
M2C_UNK func_0201c5dc();                            /* extern */
M2C_UNK func_0205369c(s32);                         /* extern */
s32 func_020536c8(s32);                             /* extern */
s32 func_020536d8(s32);                             /* extern */
s32 func_02053808(s32);                             /* extern */
s32 func_02053814(s32);                             /* extern */
M2C_UNK func_0206b0b0(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020906f4(s32, M2C_UNK);                /* extern */
M2C_UNK func_02092238(s32, s32, s32, s32);          /* extern */
s32 func_02095208(void *);                          /* extern */
s32 func_020ae60c();                                /* extern */
M2C_UNK func_020af540(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_020af570();                                /* extern */
M2C_UNK func_020b1090();                            /* extern */
s32 func_ov009_021643f4(s32);                       /* extern */
M2C_UNK func_ov012_02163b90(s32, s32);              /* extern */

void func_0206ea00(void *arg0, void *arg1) {
    s32 temp_r4;
    s32 temp_r5;

    func_020536c8(M2C_FIELD(arg0, s32 *, 0x18));
    func_0201c5dc();
    func_020536d8(M2C_FIELD(arg0, s32 *, 0x18));
    func_020b1090();
    temp_r5 = func_02095208(arg1);
    temp_r4 = func_020536c8(M2C_FIELD(arg0, s32 *, 0x18));
    func_02092238(temp_r5, temp_r4, func_020536d8(M2C_FIELD(arg0, s32 *, 0x18)), M2C_FIELD(arg0, s32 *, 8));
    func_ov012_02163b90(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18));
    if (func_ov009_021643f4(M2C_FIELD(arg0, s32 *, 0x14)) == 0) {
        return;
    }
    func_0205369c(M2C_FIELD(arg0, s32 *, 0x18));
    if (func_020ae60c() != 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x1C) == 0) {
        M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
        func_020af540(func_02053808(M2C_FIELD(arg0, s32 *, 0x18)), 0, -0x10, 0);
        func_020af540(func_02053814(M2C_FIELD(arg0, s32 *, 0x18)), 0, -0x10, 0);
        return;
    }
    func_02053808(M2C_FIELD(arg0, s32 *, 0x18));
    if (func_020af570() == 0) {
        return;
    }
    func_020022e8();
    func_020022d4();
    func_0200223c();
    func_02002228();
    func_02002298();
    func_020022ac();
    func_02002084(0x100);
    func_02001fdc(4);
    func_020906f4(M2C_FIELD(arg0, s32 *, 8), 1);
    func_0206b0b0(M2C_FIELD(arg1, s32 *, 0x28), 0, 1, 3);
}
