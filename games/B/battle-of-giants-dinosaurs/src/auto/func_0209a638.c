/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_02000fb4(u32);                         /* extern */
M2C_UNK func_02001004(M2C_UNK *, s32 *, s32 *);     /* extern */
M2C_UNK func_0200101c(void *, M2C_UNK *);           /* extern */
M2C_UNK func_020140ac(u32);                         /* extern */
M2C_UNK func_0209a74c(void *);                      /* extern */

void *func_0209a638(void *arg0) {
    u8 sp18[8];
    s32 sp14;
    s32 sp10;
    u8 sp8[8];
    s32 sp4;
    s32 sp0;
    s32 var_r9;
    u32 temp_r4;
    u32 var_r4;
    u32 var_r5;
    void *var_r4_2;
    void *var_r5_2;

    var_r4 = arg0 + 4;
    var_r5 = arg0 + 0x14;
    do {
        func_02000fb4(var_r4);
        var_r4 += 8;
    } while (var_r4 < var_r5);
    temp_r4 = arg0 + 0x2C;
    do {
        func_020140ac(var_r5);
        var_r5 += 0xC;
    } while (var_r5 < temp_r4);
    func_02000fb4(temp_r4);
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    func_02000fb4(arg0 + 0x38);
    var_r4_2 = arg0 + 0x40;
    var_r5_2 = arg0 + 0x50;
    do {
        func_02000fb4((u32) var_r4_2);
        var_r4_2 += 8;
    } while ((u32) var_r4_2 < (u32) var_r5_2);
    do {
        func_02000fb4((u32) var_r5_2);
        var_r5_2 += 8;
    } while ((u32) var_r5_2 < (u32) (arg0 + 0x60));
    var_r9                    = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    do {
        sp10 = 0;
        sp14 = 0;
        func_02001004(sp18, &sp14, &sp10);
        func_0200101c(arg0 + 0x40 + (var_r9 * 8), sp18);
        sp0 = 0x1000;
        sp4 = 0x1000;
        func_02001004(sp8, &sp4, &sp0);
        func_0200101c(arg0 + 0x50 + (var_r9 * 8), sp8);
        var_r9 += 1;
    } while (var_r9 < 2);
    func_0209a74c(arg0);
    return arg0;
}
