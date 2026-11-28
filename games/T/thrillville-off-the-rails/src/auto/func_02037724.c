#include "m2c.h"

M2C_UNK func_02035838(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_02037238(M2C_UNK *, M2C_UNK *);            /* extern */
s32 *func_0203731c(M2C_UNK *);                      /* extern */
M2C_UNK func_02037328(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK *func_02037334(M2C_UNK *);                  /* extern */
M2C_UNK func_02037344(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02037cec(M2C_UNK *);                   /* extern */
M2C_UNK func_02037d00(s32, M2C_UNK *);              /* extern */
M2C_UNK func_02037d34(M2C_UNK *);                   /* extern */
M2C_UNK func_02037d48();                            /* extern */
M2C_UNK func_02037e14(M2C_UNK *);                   /* extern */
M2C_UNK func_02037e28(s32, M2C_UNK *);              /* extern */
M2C_UNK func_02037e5c(M2C_UNK *);                   /* extern */
M2C_UNK func_02037e70();                            /* extern */
M2C_UNK func_02037f3c(M2C_UNK *);                   /* extern */
M2C_UNK func_02037f50(s32, M2C_UNK *);              /* extern */
M2C_UNK func_02037f84(M2C_UNK *);                   /* extern */
M2C_UNK func_02037f98();                            /* extern */
M2C_UNK func_02038064(M2C_UNK *);                   /* extern */
M2C_UNK func_02038078(s32, M2C_UNK *);              /* extern */
M2C_UNK func_020380ac(M2C_UNK *);                   /* extern */
M2C_UNK func_020380c0();                            /* extern */
M2C_UNK func_0203818c(M2C_UNK *);                   /* extern */
M2C_UNK func_020381a0(s32, M2C_UNK *);              /* extern */
M2C_UNK func_020381d4(M2C_UNK *);                   /* extern */
M2C_UNK func_020381e8();                            /* extern */
M2C_UNK func_020382b4(M2C_UNK *);                   /* extern */
M2C_UNK func_020382c8(s32, M2C_UNK *);              /* extern */
M2C_UNK func_020382fc(M2C_UNK *);                   /* extern */
M2C_UNK func_02038310();                            /* extern */
M2C_UNK func_020383dc(M2C_UNK *);                   /* extern */
M2C_UNK func_020383f0(s32, M2C_UNK *);              /* extern */
M2C_UNK func_02038424(M2C_UNK *);                   /* extern */
M2C_UNK func_02038438();                            /* extern */
M2C_UNK func_0203b6f0(s32, s32);                    /* extern */
M2C_UNK func_0203b76c(s32, s32);                    /* extern */
M2C_UNK func_0203b7e8(s32, s32);                    /* extern */
M2C_UNK func_0203b864(s32, s32);                    /* extern */
M2C_UNK func_0203b8e0(s32, s32);                    /* extern */
M2C_UNK func_0203b95c(s32, s32);                    /* extern */
M2C_UNK func_0203b9d8(s32, s32);                    /* extern */
s32 func_0203bc74();                                /* extern */
s32 func_0203bccc();                                /* extern */
s32 func_0203bd24();                                /* extern */
s32 func_0203bd7c();                                /* extern */
s32 func_0203bdd4();                                /* extern */
s32 func_0203be2c();                                /* extern */
s32 func_0203be84();                                /* extern */

void func_02037724(s32 arg0, s32 arg1) {
    u8 spB8[12];
    u8 spAC[12];
    u8 spA0[12];
    u8 sp94[12];
    u8 sp88[12];
    u8 sp7C[12];
    u8 sp70[12];
    M2C_UNK sp6C;
    M2C_UNK sp68;
    M2C_UNK sp64;
    M2C_UNK sp60;
    M2C_UNK sp5C;
    M2C_UNK sp58;
    M2C_UNK sp54;
    M2C_UNK sp50;
    M2C_UNK sp4C;
    M2C_UNK sp48;
    M2C_UNK sp44;
    M2C_UNK sp40;
    M2C_UNK sp3C;
    M2C_UNK sp38;
    M2C_UNK sp34;
    M2C_UNK sp30;
    M2C_UNK sp2C;
    M2C_UNK sp28;
    M2C_UNK sp24;
    M2C_UNK sp20;
    M2C_UNK sp1C;
    M2C_UNK sp18;
    M2C_UNK sp14;
    M2C_UNK sp10;
    M2C_UNK spC;
    M2C_UNK sp8;
    M2C_UNK sp4;
    M2C_UNK sp0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;

    temp_r0 = func_0203bc74();
    func_02037344(&sp68, temp_r0 + 0x14);
    func_02037328(&sp60, func_02037334(&sp68));
    func_02037344(&sp6C, temp_r0 + 0x14);
    if (func_02037238(&sp60, &sp6C) != 0) {
        do {
            func_02037328(&sp64, &sp60);
            func_02037334(&sp64);
            func_0203b7e8(temp_r0 + 8, *func_0203731c(&sp60));
            func_02038438();
            func_02035838(&sp60, &sp64);
            func_02037344(&sp6C, temp_r0 + 0x14);
        } while (func_02037238(&sp60, &sp6C) != 0);
    }
    if (arg1 != 0) {
        func_02038424(spB8);
        func_020383f0(temp_r0 + 8, spB8);
        func_020383dc(spB8);
    }
    temp_r0_2 = func_0203bdd4();
    func_02037344(&sp58, temp_r0_2 + 0x14);
    func_02037328(&sp50, func_02037334(&sp58));
    func_02037344(&sp5C, temp_r0_2 + 0x14);
    if (func_02037238(&sp50, &sp5C) != 0) {
        do {
            func_02037328(&sp54, &sp50);
            func_02037334(&sp54);
            func_0203b6f0(temp_r0_2 + 8, *func_0203731c(&sp50));
            func_02038310();
            func_02035838(&sp50, &sp54);
            func_02037344(&sp5C, temp_r0_2 + 0x14);
        } while (func_02037238(&sp50, &sp5C) != 0);
    }
    if (arg1 != 0) {
        func_020382fc(spAC);
        func_020382c8(temp_r0_2 + 8, spAC);
        func_020382b4(spAC);
    }
    temp_r0_3 = func_0203bd7c();
    func_02037344(&sp48, temp_r0_3 + 0x14);
    func_02037328(&sp40, func_02037334(&sp48));
    func_02037344(&sp4C, temp_r0_3 + 0x14);
    if (func_02037238(&sp40, &sp4C) != 0) {
        do {
            func_02037328(&sp44, &sp40);
            func_02037334(&sp44);
            func_0203b76c(temp_r0_3 + 8, *func_0203731c(&sp40));
            func_020381e8();
            func_02035838(&sp40, &sp44);
            func_02037344(&sp4C, temp_r0_3 + 0x14);
        } while (func_02037238(&sp40, &sp4C) != 0);
    }
    if (arg1 != 0) {
        func_020381d4(spA0);
        func_020381a0(temp_r0_3 + 8, spA0);
        func_0203818c(spA0);
    }
    temp_r0_4 = func_0203bccc();
    func_02037344(&sp38, temp_r0_4 + 0x14);
    func_02037328(&sp30, func_02037334(&sp38));
    func_02037344(&sp3C, temp_r0_4 + 0x14);
    if (func_02037238(&sp30, &sp3C) != 0) {
        do {
            func_02037328(&sp34, &sp30);
            func_02037334(&sp34);
            func_0203b9d8(temp_r0_4 + 8, *func_0203731c(&sp30));
            func_020380c0();
            func_02035838(&sp30, &sp34);
            func_02037344(&sp3C, temp_r0_4 + 0x14);
        } while (func_02037238(&sp30, &sp3C) != 0);
    }
    if (arg1 != 0) {
        func_020380ac(sp94);
        func_02038078(temp_r0_4 + 8, sp94);
        func_02038064(sp94);
    }
    temp_r0_5 = func_0203be2c();
    func_02037344(&sp28, temp_r0_5 + 0x14);
    func_02037328(&sp20, func_02037334(&sp28));
    func_02037344(&sp2C, temp_r0_5 + 0x14);
    if (func_02037238(&sp20, &sp2C) != 0) {
        do {
            func_02037328(&sp24, &sp20);
            func_02037334(&sp24);
            func_0203b864(temp_r0_5 + 8, *func_0203731c(&sp20));
            func_02037f98();
            func_02035838(&sp20, &sp24);
            func_02037344(&sp2C, temp_r0_5 + 0x14);
        } while (func_02037238(&sp20, &sp2C) != 0);
    }
    if (arg1 != 0) {
        func_02037f84(sp88);
        func_02037f50(temp_r0_5 + 8, sp88);
        func_02037f3c(sp88);
    }
    temp_r0_6 = func_0203bd24();
    func_02037344(&sp18, temp_r0_6 + 0x14);
    func_02037328(&sp10, func_02037334(&sp18));
    func_02037344(&sp1C, temp_r0_6 + 0x14);
    if (func_02037238(&sp10, &sp1C) != 0) {
        do {
            func_02037328(&sp14, &sp10);
            func_02037334(&sp14);
            func_0203b8e0(temp_r0_6 + 8, *func_0203731c(&sp10));
            func_02037e70();
            func_02035838(&sp10, &sp14);
            func_02037344(&sp1C, temp_r0_6 + 0x14);
        } while (func_02037238(&sp10, &sp1C) != 0);
    }
    if (arg1 != 0) {
        func_02037e5c(sp7C);
        func_02037e28(temp_r0_6 + 8, sp7C);
        func_02037e14(sp7C);
    }
    temp_r0_7 = func_0203be84();
    func_02037344(&sp8, temp_r0_7 + 0x14);
    func_02037328(&sp0, func_02037334(&sp8));
    func_02037344(&spC, temp_r0_7 + 0x14);
    if (func_02037238(&sp0, &spC) != 0) {
        do {
            func_02037328(&sp4, &sp0);
            func_02037334(&sp4);
            func_0203b95c(temp_r0_7 + 8, *func_0203731c(&sp0));
            func_02037d48();
            func_02035838(&sp0, &sp4);
            func_02037344(&spC, temp_r0_7 + 0x14);
        } while (func_02037238(&sp0, &spC) != 0);
    }
    if (arg1 == 0) {
        return;
    }
    func_02037d34(sp70);
    func_02037d00(temp_r0_7 + 8, sp70);
    func_02037cec(sp70);
}
