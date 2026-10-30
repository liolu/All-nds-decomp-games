#include "m2c.h"

M2C_UNK func_0208625c(M2C_UNK *, s32, s32 *, M2C_UNK *); /* extern */
M2C_UNK func_02086480(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02086488(M2C_UNK *);                   /* extern */

s32 func_02085bd0(s32 arg0, M2C_UNK arg1, u32 arg2, M2C_UNK arg3) {
    u8 sp58[8];
    u8 sp50[8];
    u8 sp48[8];
    u8 sp40[8];
    u8 sp38[8];
    u8 sp30[8];
    s32 sp2C;
    M2C_UNK sp28;
    s32 sp24;
    M2C_UNK sp20;
    s32 sp1C;
    M2C_UNK sp18;
    s32 sp14;
    M2C_UNK sp10;
    s32 spC;
    M2C_UNK sp8;
    s32 sp4;
    M2C_UNK sp0;

    switch (arg2) {
        default:
            break;
        case 1:
            func_02086480(sp58, arg1, arg3);
            sp2C = arg0 + 0x7C;
            func_0208625c(&sp28, arg0 + 0x78, &sp2C, sp58);
            func_02086488(sp58);
            break;
        case 2:
            func_02086480(sp50, arg1, arg3);
            sp24 = arg0 + 0x88;
            func_0208625c(&sp20, arg0 + 0x84, &sp24, sp50);
            func_02086488(sp50);
            break;
        case 3:
            func_02086480(sp48, arg1, arg3);
            sp1C = arg0 + 0x94;
            func_0208625c(&sp18, arg0 + 0x90, &sp1C, sp48);
            func_02086488(sp48);
            break;
        case 4:
            func_02086480(sp40, arg1, arg3);
            sp14 = arg0 + 0xA0;
            func_0208625c(&sp10, arg0 + 0x9C, &sp14, sp40);
            func_02086488(sp40);
            break;
        case 5:
            func_02086480(sp38, arg1, arg3);
            spC = arg0 + 0xAC;
            func_0208625c(&sp8, arg0 + 0xA8, &spC, sp38);
            func_02086488(sp38);
            break;
        case 6:
            func_02086480(sp30, arg1, arg3);
            sp4 = arg0 + 0xB8;
            func_0208625c(&sp0, arg0 + 0xB4, &sp4, sp30);
            func_02086488(sp30);
            break;
    }
    return 1;
}
