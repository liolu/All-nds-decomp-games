/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001dfc(void *, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_0200fa5c(s16);                         /* extern */
s16 func_0200fd60(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s16 func_0200ff08(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0201381c();                                /* extern */
extern M2C_UNK data_020feff8;
extern M2C_UNK data_020ff000;
extern M2C_UNK data_020ff008;

void func_0204f56c(void *arg0, M2C_UNK arg1, s32 arg2) {
    M2C_UNK *var_r3;

    if (M2C_FIELD(arg0, s32 *, 0x28) == 0) {
        var_r3 = &data_020feff8;
    } else {
        var_r3 = &data_020ff000;
    }
    func_02001dfc(arg0, &data_020ff008, arg1, var_r3);
    if (arg2 == 0) {
        M2C_FIELD(arg0, s16 *, 0x20) = func_0200ff08(arg0, 1, 0, 0);
    } else {
        M2C_FIELD(arg0, s16 *, 0x20) = func_0200fd60(arg0, 1, 0, 0);
    }
    func_0200fa5c(M2C_FIELD(arg0, s16 *, 0x20));
    M2C_FIELD(arg0, s32 *, 0x24) = func_0201381c();
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
}
