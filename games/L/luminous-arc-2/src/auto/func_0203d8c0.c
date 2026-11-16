/* compiler: 2.0/sp1p5 -flag no-opt_common_subs */
#include "m2c.h"

M2C_UNK func_020075b0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_0217b34c;
extern M2C_UNK data_0217b3ce;

void func_0203d8c0(s16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    M2C_FIELD(&data_0217b34c, s16 *, 0x7C) = arg2;
    M2C_FIELD(&data_0217b34c, s16 *, 0x7E) = arg3;
    M2C_FIELD(&data_0217b34c, s16 *, 0x78) = arg0;
    M2C_FIELD(&data_0217b34c, s16 *, 0x7A) = arg1;
    func_020075b0(&data_0217b3ce, 0, 8);
    if ((s32) M2C_FIELD(&data_0217b34c, s16 *, 0x7A) < (s32) M2C_FIELD(&data_0217b34c, s16 *, 0x7E)) {
        M2C_FIELD(&data_0217b34c, s16 *, 0x82) =
            (s16) (M2C_FIELD(&data_0217b34c, s16 *, 0x7E) - M2C_FIELD(&data_0217b34c, s16 *, 0x7A));
    } else if ((s32) M2C_FIELD(&data_0217b34c, s16 *, 0x7A) > (s32) M2C_FIELD(&data_0217b34c, s16 *, 0x7E)) {
        M2C_FIELD(&data_0217b34c, s16 *, 0x84) =
            (s16) (M2C_FIELD(&data_0217b34c, s16 *, 0x7A) - M2C_FIELD(&data_0217b34c, s16 *, 0x7E));
    }
    if ((s32) M2C_FIELD(&data_0217b34c, s16 *, 0x78) < (s32) M2C_FIELD(&data_0217b34c, s16 *, 0x7C)) {
        M2C_FIELD(&data_0217b34c, s16 *, 0x86) =
            (s16) (M2C_FIELD(&data_0217b34c, s16 *, 0x7C) - M2C_FIELD(&data_0217b34c, s16 *, 0x78));
        return;
    }
    if ((s32) M2C_FIELD(&data_0217b34c, s16 *, 0x78) > (s32) M2C_FIELD(&data_0217b34c, s16 *, 0x7C)) {
        M2C_FIELD(&data_0217b34c, s16 *, 0x88) =
            (s16) (M2C_FIELD(&data_0217b34c, s16 *, 0x78) - M2C_FIELD(&data_0217b34c, s16 *, 0x7C));
    }
}
