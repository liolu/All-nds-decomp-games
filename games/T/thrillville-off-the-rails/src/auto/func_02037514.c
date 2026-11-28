#include "m2c.h"

M2C_UNK func_02035838(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_02037238(M2C_UNK *, M2C_UNK *);            /* extern */
s32 *func_0203731c(M2C_UNK *);                      /* extern */
M2C_UNK func_02037328(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK *func_02037334(M2C_UNK *);                  /* extern */
M2C_UNK func_02037344(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020375fc(M2C_UNK *);                   /* extern */
M2C_UNK func_02037610(s32, M2C_UNK *);              /* extern */
M2C_UNK func_02037644(M2C_UNK *);                   /* extern */
M2C_UNK func_02037658();                            /* extern */
M2C_UNK func_0203b674(s32, s32);                    /* extern */
s32 func_0203bedc();                                /* extern */

void func_02037514(s32 arg0, s32 arg1) {
    u8 sp10[12];
    M2C_UNK spC;
    M2C_UNK sp8;
    M2C_UNK sp4;
    M2C_UNK sp0;
    s32 temp_r0;

    temp_r0 = func_0203bedc();
    func_02037344(&sp8, temp_r0 + 0x14);
    func_02037328(&sp0, func_02037334(&sp8));
    func_02037344(&spC, temp_r0 + 0x14);
    if (func_02037238(&sp0, &spC) != 0) {
        do {
            func_02037328(&sp4, &sp0);
            func_02037334(&sp4);
            func_0203b674(temp_r0 + 8, *func_0203731c(&sp0));
            func_02037658();
            func_02035838(&sp0, &sp4);
            func_02037344(&spC, temp_r0 + 0x14);
        } while (func_02037238(&sp0, &spC) != 0);
    }
    if (arg1 == 0) {
        return;
    }
    func_02037644(sp10);
    func_02037610(temp_r0 + 8, sp10);
    func_020375fc(sp10);
}
