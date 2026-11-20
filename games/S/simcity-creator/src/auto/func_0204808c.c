#include "m2c.h"

M2C_UNK func_02001478(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0200163c(M2C_UNK);                     /* extern */
M2C_UNK func_02001bc8(M2C_UNK);                     /* extern */
M2C_UNK func_02001da0(M2C_UNK);                     /* extern */
M2C_UNK func_02001fdc(M2C_UNK);                     /* extern */
M2C_UNK func_02002084(M2C_UNK);                     /* extern */
M2C_UNK func_02002228();                            /* extern */
M2C_UNK func_0200223c();                            /* extern */
M2C_UNK func_02002298();                            /* extern */
M2C_UNK func_020022ac();                            /* extern */
M2C_UNK func_020022d4();                            /* extern */
M2C_UNK func_020022e8();                            /* extern */
M2C_UNK func_02002a60();                            /* extern */
M2C_UNK func_02002b94();                            /* extern */
M2C_UNK func_02002e98(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02006e64(M2C_UNK, void *, s32);        /* extern */
s32 func_020230d0();                                /* extern */
M2C_UNK func_0202312c(s32, M2C_UNK *, void *, M2C_UNK, s32); /* extern */
s32 func_020348ec(s32);                             /* extern */
M2C_UNK func_020482d0(M2C_UNK);                     /* extern */
M2C_UNK func_020490f4(void *);                      /* extern */
M2C_UNK func_020491e4(void *);                      /* extern */
M2C_UNK func_02049540(void *);                      /* extern */
M2C_UNK func_020496a0(void *);                      /* extern */
M2C_UNK func_020496b4(void *, s32);                 /* extern */
M2C_UNK func_02049700(void *, s32);                 /* extern */
M2C_UNK func_02049818(void *, M2C_UNK);             /* extern */
s32 func_02053808();                                /* extern */
s32 func_02053814();                                /* extern */
s32 func_02061c28();                                /* extern */
s32 func_02096668();                                /* extern */
M2C_UNK func_020af540(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_020b2648();                                /* extern */
s32 func_020b7278();                                /* extern */
M2C_UNK func_020b72a0();                            /* extern */
s32 func_ov015_02171944(M2C_UNK);                   /* extern */
extern M2C_UNK data_020cbba4;

void func_0204808c(void *arg0, M2C_UNK arg1) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;

    func_020482d0(1);
    var_r0 = func_020348ec(0xBFA0);
    if (var_r0 != 0) {
        var_r0 = func_020b2648();
    }
    M2C_FIELD(arg0, s32 *, 0x17714) = var_r0;
    var_r0_2                        = func_020348ec(0xC);
    if (var_r0_2 != 0) {
        var_r0_2 = func_02061c28();
    }
    M2C_FIELD(arg0, s32 *, 0xB3C) = var_r0_2;
    var_r0_3                      = func_020348ec(0x58);
    if (var_r0_3 != 0) {
        var_r0_3 = func_020230d0();
    }
    M2C_FIELD(arg0, s32 *, 0xB40) = var_r0_3;
    var_r0_4                      = func_020348ec(0xC);
    if (var_r0_4 != 0) {
        var_r0_4 = func_02096668();
    }
    M2C_FIELD(arg0, s32 *, 0x17710) = var_r0_4;
    M2C_FIELD(arg0, s32 *, 0x37934) = 0;
    M2C_FIELD(arg0, s32 *, 0xACC)   = 0;
    M2C_FIELD(arg0, s32 *, 0xA1C)   = 0;
    M2C_FIELD(arg0, s32 *, 0xA28)   = 0x11;
    func_02002a60();
    func_02002b94();
    func_020022e8();
    func_020022d4();
    func_0200223c();
    func_02002228();
    func_02002298();
    func_020022ac();
    func_02006e64(0, (void *) 0x06800000, 0xA4000);
    func_0200163c(0x10);
    func_02001da0(0x60);
    func_02001fdc(4);
    func_02002084(0x100);
    func_02001bc8(0xB);
    func_02001478(1, 0, 1);
    func_02006e64(0, arg0 + 4, 0x508);
    func_02006e64(0, arg0 + 0x50C, 0x508);
    M2C_FIELD(arg0, s32 *, 0xA40) = 0;
    func_020490f4(arg0);
    func_02049818(arg0, arg1);
    func_02049540(arg0);
    func_0202312c(M2C_FIELD(arg0, s32 *, 0xB40), &data_020cbba4, arg0 + 0xAD4, 0x20, 0x200);
    func_02002e98(M2C_FIELD(arg0, s32 *, 0xAD4), 0, 0x200);
    func_020496a0(arg0);
    func_020496b4(arg0, func_ov015_02171944(arg1));
    func_02049700(arg0, func_ov015_02171944(arg1));
    func_020491e4(arg0);
    func_ov015_02171944(arg1);
    func_020af540(func_02053808(), 0, -0x10, 0);
    func_ov015_02171944(arg1);
    func_020af540(func_02053814(), 0, -0x10, 0);
    M2C_FIELD(arg0, s32 *, 0xB28) = 0;
    M2C_FIELD(arg0, s32 *, 0xA70) = 0;
    M2C_FIELD(arg0, s32 *, 0xAC8) = 0;
    var_r0_5                      = func_020348ec(0x214);
    if (var_r0_5 != 0) {
        var_r0_5 = func_020b7278();
    }
    M2C_FIELD(arg0, s32 *, 0x17830) = var_r0_5;
    func_020b72a0();
    M2C_FIELD(arg0, s32 *, 0xA2C) = 1;
    M2C_FIELD(arg0, s32 *, 0xA30) = 0;
    M2C_FIELD(arg0, s32 *, 0xA14) = 0x13;
    M2C_FIELD(arg0, s32 *, 0xA40) = 0;
}
