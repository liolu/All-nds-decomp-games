#include "m2c.h"

M2C_UNK func_02000fe4(void **, M2C_UNK *, s32 *);   /* extern */
s32 func_020945a0(M2C_UNK);                         /* extern */
extern M2C_UNK data_020e6d84;

void func_0205270c(void *arg0) {
    void *sp4;
    s32 sp0;
    s32 *temp_r0;
    s32 temp_r8;
    s32 var_r10;
    void *temp_r1;

    if (M2C_FIELD(arg0, s32 *, 0x3F0) != 0xE8BB25DB) {
        return;
    }
    var_r10 = 0;
loop_3:
    temp_r8 = func_020945a0(2);
    sp0     = 0xA27CC484;
    func_02000fe4(&sp4, &data_020e6d84, &sp0);
    temp_r1 = M2C_FIELD(sp4, void **, 0x10);
    temp_r0 = M2C_FIELD(temp_r1, s32 *, 0x10) + (temp_r8 * M2C_FIELD(temp_r1, u16 *, 0xC));
    if (temp_r0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) *temp_r0;
        return;
    }
    var_r10 += 1;
    if (var_r10 >= 4) {
        M2C_FIELD(arg0, s32 *, 0x3F0) = 0x045D9554;
        return;
    }
    goto loop_3;
}
