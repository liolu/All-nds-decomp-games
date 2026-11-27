#include "m2c.h"

s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
M2C_UNK func_020ac780(M2C_UNK *);                   /* extern */
M2C_UNK func_020ac7d4(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020ac88c(M2C_UNK *, M2C_UNK *);        /* extern */
extern s8 data_021d5e80;
extern M2C_UNK data_021d5ff8;

void func_020aa9b0(M2C_UNK *arg0, M2C_UNK arg1) {
    u8 sp0[92];
    s32 temp_r4;

    func_020ac780(sp0);
    temp_r4 = _Z20DisableIRQInterruptsv();
    func_020ac7d4(sp0, &data_021d5ff8, 0x14);
    func_020ac7d4(sp0, arg0, arg1);
    func_020ac88c(sp0, &data_021d5ff8);
    _Z20SetIRQInterruptStatei(temp_r4);
    data_021d5e80 = 1;
}
