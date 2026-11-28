#include "m2c.h"

M2C_UNK func_02035838(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020370b4(M2C_UNK *);                   /* extern */
M2C_UNK func_020370c8(s32, M2C_UNK *);              /* extern */
M2C_UNK func_020370fc(M2C_UNK *);                   /* extern */
M2C_UNK func_02037110();                            /* extern */
M2C_UNK func_020371dc(M2C_UNK *);                   /* extern */
M2C_UNK func_020371f0(s32, M2C_UNK *);              /* extern */
M2C_UNK func_02037224(M2C_UNK *);                   /* extern */
s32 func_02037238(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_02037250();                            /* extern */
s32 *func_0203731c(M2C_UNK *);                      /* extern */
M2C_UNK func_02037328(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK *func_02037334(M2C_UNK *);                  /* extern */
M2C_UNK func_02037344(M2C_UNK *, s32);              /* extern */
M2C_UNK func_0203afe4(s32, s32);                    /* extern */
M2C_UNK func_0203b32c(s32, s32);                    /* extern */
s32 func_0203bf34();                                /* extern */
s32 func_0203bf8c();                                /* extern */

void func_02036efc(s32 arg0, s32 arg1) {
    u8 sp2C[12];
    u8 sp20[12];
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

    temp_r0 = func_0203bf8c();
    func_02037344(&sp18, temp_r0 + 0x14);
    func_02037328(&sp10, func_02037334(&sp18));
    func_02037344(&sp1C, temp_r0 + 0x14);
    if (func_02037238(&sp10, &sp1C) != 0) {
        do {
            func_02037328(&sp14, &sp10);
            func_02037334(&sp14);
            func_0203afe4(temp_r0 + 8, *func_0203731c(&sp10));
            func_02037250();
            func_02035838(&sp10, &sp14);
            func_02037344(&sp1C, temp_r0 + 0x14);
        } while (func_02037238(&sp10, &sp1C) != 0);
    }
    if (arg1 != 0) {
        func_02037224(sp2C);
        func_020371f0(temp_r0 + 8, sp2C);
        func_020371dc(sp2C);
    }
    temp_r0_2 = func_0203bf34();
    func_02037344(&sp8, temp_r0_2 + 0x14);
    func_02037328(&sp0, func_02037334(&sp8));
    func_02037344(&spC, temp_r0_2 + 0x14);
    if (func_02037238(&sp0, &spC) != 0) {
        do {
            func_02037328(&sp4, &sp0);
            func_02037334(&sp4);
            func_0203b32c(temp_r0_2 + 8, *func_0203731c(&sp0));
            func_02037110();
            func_02035838(&sp0, &sp4);
            func_02037344(&spC, temp_r0_2 + 0x14);
        } while (func_02037238(&sp0, &spC) != 0);
    }
    if (arg1 == 0) {
        return;
    }
    func_020370fc(sp20);
    func_020370c8(temp_r0_2 + 8, sp20);
    func_020370b4(sp20);
}
