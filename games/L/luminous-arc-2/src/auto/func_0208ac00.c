#include "m2c.h"

M2C_UNK func_0200745c(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_020074b8(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_020075b0(s32, M2C_UNK, M2C_UNK);       /* extern */
s16 func_020846fc(M2C_UNK);                         /* extern */
M2C_UNK func_02085700();                            /* extern */
void *func_02090a40();                              /* extern */
M2C_UNK func_02090a50(M2C_UNK);                     /* extern */

void func_0208ac00(s32 arg0) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r4;
    void *temp_r5;

    M2C_FIELD(func_02090a40(), s8 *, 0xC)    = 0;
    M2C_FIELD(func_02090a40(), s8 *, 0x17C)  = 0;
    temp_r5                                  = func_02090a40();
    M2C_FIELD(temp_r5, s16 *, 0x17E)         = func_020846fc(0x10000);
    M2C_FIELD(func_02090a40(), s32 *, 0x180) = 0;
    temp_r0                                  = func_02090a40();
    M2C_FIELD(temp_r0, s32 *, 0x184)         = 0;
    M2C_FIELD(temp_r0, s32 *, 0x188)         = 0;
    temp_r0_2                                = func_02090a40();
    M2C_FIELD(temp_r0_2, s32 *, 0x18C)       = 0;
    M2C_FIELD(temp_r0_2, s32 *, 0x190)       = 0;
    M2C_FIELD(func_02090a40(), s8 *, 0x1A4)  = 0;
    M2C_FIELD(func_02090a40(), s8 *, 0x1A9)  = 0;
    M2C_FIELD(func_02090a40(), s8 *, 0x1AA)  = 0;
    M2C_FIELD(func_02090a40(), s8 *, 0x1AB)  = 0;
    M2C_FIELD(func_02090a40(), s8 *, 0x1AC)  = 0;
    M2C_FIELD(func_02090a40(), s8 *, 0x1A7)  = 0;
    M2C_FIELD(func_02090a40(), s8 *, 0x1A8)  = 0;
    M2C_FIELD(func_02090a40(), s16 *, 0x1B2) = 0;
    M2C_FIELD(func_02090a40(), s16 *, 0x1B4) = 0;
    M2C_FIELD(func_02090a40(), s32 *, 0x1B8) = 0;
    temp_r0_3                                = func_02090a40();
    M2C_FIELD(temp_r0_3, s32 *, 0x1E0)       = 0;
    M2C_FIELD(temp_r0_3, s32 *, 0x1E4)       = 0;
    temp_r0_4                                = func_02090a40();
    M2C_FIELD(temp_r0_4, s32 *, 0x1F0)       = 0;
    M2C_FIELD(temp_r0_4, s32 *, 0x1F4)       = 0;
    func_020074b8(0, func_02090a40() + 0x3CC, 0x98);
    if (arg0 == 2) {
        temp_r4                        = func_02090a40();
        M2C_FIELD(temp_r4, u8 *, 0x14) = (u8) M2C_FIELD(func_02090a40(), u8 *, 0xD);
        if (M2C_FIELD(func_02090a40(), u8 *, 0x15) == 3) {
            func_02090a50(1);
            return;
        }
        if (M2C_FIELD(func_02090a40(), u8 *, 0x15) != 2) {
            return;
        }
        func_02090a50(0xA);
        return;
    }
    M2C_FIELD(func_02090a40(), s8 *, 0xD)    = 0;
    M2C_FIELD(func_02090a40(), s8 *, 0xE)    = 0;
    M2C_FIELD(func_02090a40(), s8 *, 0x14)   = 0;
    M2C_FIELD(func_02090a40(), s8 *, 0x17)   = 0;
    M2C_FIELD(func_02090a40(), s32 *, 0x20)  = 0;
    M2C_FIELD(func_02090a40(), s32 *, 0xE8)  = 0;
    M2C_FIELD(func_02090a40(), s8 *, 0x1A5)  = 0;
    M2C_FIELD(func_02090a40(), s16 *, 0x1B0) = 0;
    M2C_FIELD(func_02090a40(), s32 *, 0x1BC) = 0;
    temp_r0_5                                = func_02090a40();
    M2C_FIELD(temp_r0_5, s32 *, 0x1C0)       = 0;
    M2C_FIELD(temp_r0_5, s32 *, 0x1C4)       = 0;
    M2C_FIELD(func_02090a40(), s32 *, 0x1C8) = 0;
    temp_r0_6                                = func_02090a40();
    M2C_FIELD(temp_r0_6, s32 *, 0x1CC)       = 0;
    M2C_FIELD(temp_r0_6, s32 *, 0x1D0)       = 0;
    M2C_FIELD(func_02090a40(), s32 *, 0x1D4) = 0;
    M2C_FIELD(func_02090a40(), s32 *, 0x204) = 0;
    M2C_FIELD(func_02090a40(), s32 *, 0x208) = 0;
    M2C_FIELD(func_02090a40(), s32 *, 0x2F0) = 0;
    func_02085700();
    func_020074b8(0, func_02090a40() + 0x24, 0x80);
    func_0200745c(0, func_02090a40() + 0xA4, 0x40);
    func_020074b8(0, func_02090a40() + 0xF4, 0x80);
    func_020074b8(0, func_02090a40() + 0x194, 0xC);
    func_020074b8(0, func_02090a40() + 0x210, 0x80);
    func_0200745c(0, func_02090a40() + 0x290, 0x40);
    func_020075b0(func_02090a40() + 0x2D0, 0, 0x20);
    func_020074b8(0, func_02090a40() + 0x348, 0x84);
    if (arg0 == 1) {
        if (M2C_FIELD(func_02090a40(), u8 *, 0x15) == 0) {
            func_02090a50(3);
            return;
        }
        if (M2C_FIELD(func_02090a40(), u8 *, 0x15) != 1) {
            return;
        }
        func_02090a50(4);
        return;
    }
    M2C_FIELD(func_02090a40(), s8 *, 0x15)   = 0;
    M2C_FIELD(func_02090a40(), s8 *, 0x16)   = 0;
    M2C_FIELD(func_02090a40(), s8 *, 0x18)   = 0;
    M2C_FIELD(func_02090a40(), s32 *, 0x20C) = 0;
    M2C_FIELD(func_02090a40(), s8 *, 0x1A6)  = 0;
    M2C_FIELD(func_02090a40(), s8 *, 0x1AE)  = 0;
    M2C_FIELD(func_02090a40(), s8 *, 0x1AD)  = 0;
    temp_r0_7                                = func_02090a40();
    M2C_FIELD(temp_r0_7, s32 *, 0x1F8)       = 0;
    M2C_FIELD(temp_r0_7, s32 *, 0x1FC)       = 0;
    M2C_FIELD(func_02090a40(), s32 *, 0x46C) = 0;
    M2C_FIELD(func_02090a40(), s32 *, 0x470) = 0;
}
