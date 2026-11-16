/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

M2C_UNK func_0202312c(s32, M2C_UNK *, s32 *, M2C_UNK, s32); /* extern */
M2C_UNK func_0203acd4(void *, s32, s32, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_02046c84(s32);                         /* extern */
s32 func_02091a18(s32);                             /* extern */
s32 func_02091a28(s32);                             /* extern */
s32 func_02091a38(s32);                             /* extern */
extern M2C_UNK data_020c9758;
extern M2C_UNK data_020c9778;

void func_0203b9a4(void *arg0) {
    s32 spC;
    s32 temp_r5;
    s32 var_r6;
    u8 temp_r0;

    func_02046c84(M2C_FIELD(arg0, s32 *, 0x269E0));
    spC = func_02091a18(M2C_FIELD(arg0, s32 *, 0x269C4));
    func_0202312c(M2C_FIELD(arg0, s32 *, 0x269CC), &data_020c9758, &spC, 0x24, 0x8000);
    spC = func_02091a38(M2C_FIELD(arg0, s32 *, 0x269C4));
    func_0202312c(M2C_FIELD(arg0, s32 *, 0x269CC), &data_020c9778, &spC, 0x28, 0x800);
    func_02046c84(M2C_FIELD(arg0, s32 *, 0x269E0));
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x26F30);
    var_r6  = 0;
    if (temp_r0 != 0) {
        var_r6 = temp_r0 - 1;
    }
    temp_r5 = func_02091a28(M2C_FIELD(arg0, s32 *, 0x269C4));
    func_0203acd4(arg0, temp_r5, func_02091a38(M2C_FIELD(arg0, s32 *, 0x269C4)), 0x36, (var_r6 * 3) + 0x240, 5, 3);
}
