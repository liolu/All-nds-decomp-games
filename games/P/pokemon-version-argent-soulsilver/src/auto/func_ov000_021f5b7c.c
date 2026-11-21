typedef long long s64;
typedef int s32;
typedef unsigned short u16;
typedef short s16;
typedef unsigned char u8;
typedef struct G {
    u8 p0[0x15];
    u8 f15;
    u8 p1[4];
    u16 f1A;
    s32 f1C;
    u8 p2[4];
    s32 f24;
    u8 p3[0x7C];
    s16 fA4;
    u8 p4[0x3E];
    s32 fE4;
    u8 p5[0xC];
    s32 fF4;
    u8 p6[0xC4];
    s32 f1BC;
    s64 f1C0;
    s32 f1C8;
    s64 f1CC;
    u8 p7[0x30];
    s32 f204;
    s32 f208;
} G;
typedef struct S {
    s32 a;
    s32 b;
    s32 c;
} S;
extern u8 data_ov000_02217acc;
s64 func_020d34b0(void);
s16 func_ov000_02212ea0(s32);
s32 func_ov000_02212e98(s32);
s32 func_ov000_02212dd4(s32, u8 *, s32);
s32 func_ov000_022139d8(s32, s32);
G *func_ov000_021f957c(void);
s32 func_ov000_021f4324(s32, s32, s32, u16, S *, s32);
s32 func_ov000_021f5b7c(s32 arg0, s32 arg1) {
    S sp;
    s32 r4;
    s32 r6;
    if (arg1 != 0 || (func_ov000_021f957c()->f1C == 0 && func_ov000_021f957c()->f1A == 0)) {
        func_ov000_021f957c()->f1BC = 1;
        func_ov000_021f957c()->f1C0 = func_020d34b0();
        func_ov000_021f957c()->fF4  = arg0;
        return 0;
    }
    if (func_ov000_021f957c()->f15 == 0) {
        r6                          = func_ov000_022139d8(func_ov000_021f957c()->fE4, 0);
        func_ov000_021f957c()->fF4  = func_ov000_02212dd4(r6, &data_ov000_02217acc, 0);
        func_ov000_021f957c()->f24  = func_ov000_02212e98(r6);
        func_ov000_021f957c()->fA4  = func_ov000_02212ea0(r6);
        func_ov000_021f957c()->f204 = func_ov000_021f957c()->fF4;
        r4                          = 1;
    } else {
        if (func_ov000_021f957c()->f15 == 1) {
            func_ov000_021f957c()->fF4 = arg0;
        }
        func_ov000_021f957c()->f204 = arg0;
        sp.b                        = func_ov000_021f957c()->f1C;
        sp.c                        = func_ov000_021f957c()->f1A;
        r4                          = 3;
    }
    func_ov000_021f957c()->f1C8 = 0x1770;
    func_ov000_021f957c()->f1CC = func_020d34b0();
    func_ov000_021f957c()->f1BC = 0;
    {
        s32 r7;
        if (func_ov000_021f957c()->f208 != 0) {
            r7 = 11;
        } else {
            r7 = 1;
        }
        sp.a = func_ov000_021f957c()->f15;
        return func_ov000_021f4324(r7, arg0, func_ov000_021f957c()->f24, func_ov000_021f957c()->fA4, &sp, r4);
    }
}
