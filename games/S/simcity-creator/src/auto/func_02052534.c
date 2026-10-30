#include "m2c.h"

M2C_UNK func_0202312c(s32, M2C_UNK *, s32 *, M2C_UNK, s32); /* extern */
s32 func_02046c84(s32);                             /* extern */
M2C_UNK func_02052084(void *, s32, s32, M2C_UNK, s32, s32, s32); /* extern */
s32 func_02091a18(s32);                             /* extern */
s32 func_02091a28(s32);                             /* extern */
s32 func_02091a38(s32);                             /* extern */
extern M2C_UNK data_020cc4cc;
extern M2C_UNK data_020cc4ec;

void func_02052534(void *arg0) {
    s32 spC;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r6;

    temp_r5 = func_02046c84(M2C_FIELD(arg0, s32 *, 0xB58));
    spC     = func_02091a18(M2C_FIELD(arg0, s32 *, 0xB44));
    func_0202312c(M2C_FIELD(arg0, s32 *, 0xB40), &data_020cc4cc, &spC, 0x24, 0x8000);
    spC = func_02091a38(M2C_FIELD(arg0, s32 *, 0xB44));
    func_0202312c(M2C_FIELD(arg0, s32 *, 0xB40), &data_020cc4ec, &spC, 0x28, 0x800);
    if ((temp_r5 >= 4) && (temp_r5 <= 6)) {
        var_r6 = temp_r5 - 4;
    } else {
        var_r6 = 0;
    }
    temp_r5_2 = func_02091a28(M2C_FIELD(arg0, s32 *, 0xB44));
    func_02052084(arg0, temp_r5_2, func_02091a38(M2C_FIELD(arg0, s32 *, 0xB44)), 0x35, (var_r6 * 3) + 0x240, 5, 3);
}
