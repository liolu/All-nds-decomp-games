#include "m2c.h"

u32 func_0200613c(s32, s32);                        /* extern */
s32 func_02006580(M2C_UNK *, M2C_UNK, s16, void *); /* extern */
s32 func_0200659c(M2C_UNK *, M2C_UNK, s32);         /* extern */
M2C_UNK func_0202f198();                            /* extern */
s32 func_02094b78(void *, s32, s32);                /* extern */
M2C_UNK func_020ac144(void *, u32 *);               /* extern */
M2C_UNK func_020ac39c(void *, M2C_UNK);             /* extern */
void *func_020ac3a4(void *);                        /* extern */
s32 func_020ac3ac(void *);                          /* extern */
extern M2C_UNK data_020e0bcc;

void func_020055f4(M2C_UNK arg0, s16 arg1, void *arg2) {
    u32 sp4;
    u32 sp0;
    s32 temp_r6;
    void *temp_r0;
    void *temp_r5;

    temp_r0                         = func_020ac3a4(arg2);
    M2C_FIELD(temp_r0, s16 *, 0x12) = arg1;
    temp_r6 = func_0200659c(&data_020e0bcc, arg0, func_02006580(&data_020e0bcc, arg0, arg1, temp_r0 + 0x14));
    sp4     = (u32) (M2C_FIELD(arg2, s32 *, 8) + 7) >> 3;
    func_020ac39c(arg2, 0x40);
    func_020ac144(arg2, &sp4);
    func_020ac39c(arg2, 0);
    sp0 = func_0200613c(func_020ac3a4(arg2) + 8, sp4 - 8);
    func_020ac144(arg2, &sp0);
    sp0 = func_0200613c(func_020ac3a4(arg2) + 8, 0x18);
    func_020ac144(arg2, &sp0);
    temp_r5 = func_020ac3a4(arg2);
    if (func_02094b78(temp_r5, func_020ac3ac(arg2), temp_r6) == 0) {
        return;
    }
    func_0202f198();
}
