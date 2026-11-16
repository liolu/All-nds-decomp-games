/* compiler: 2.0/sp1p5 -flag no-opt_common_subs */
#include "m2c.h"

M2C_UNK func_020075b0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0203baf0(s16, s16);                    /* extern */
extern M2C_UNK data_0217b34c;
extern M2C_UNK data_0217b3ce;

void func_0203be34(s16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    M2C_FIELD(&data_0217b34c, s16 *, 0x6C) = arg0;
    M2C_FIELD(&data_0217b34c, s16 *, 0x6E) = arg1;
    M2C_FIELD(&data_0217b34c, s16 *, 0x70) = arg2;
    M2C_FIELD(&data_0217b34c, s16 *, 0x72) = arg3;
    func_020075b0(&data_0217b3ce, 0, 8);
    if ((s32) M2C_FIELD(&data_0217b34c, s16 *, 0x6E) < (s32) M2C_FIELD(&data_0217b34c, s16 *, 0x72)) {
        M2C_FIELD(&data_0217b34c, s16 *, 0x82) =
            (s16) (M2C_FIELD(&data_0217b34c, s16 *, 0x72) - M2C_FIELD(&data_0217b34c, s16 *, 0x6E));
    } else if ((s32) M2C_FIELD(&data_0217b34c, s16 *, 0x6E) > (s32) M2C_FIELD(&data_0217b34c, s16 *, 0x72)) {
        M2C_FIELD(&data_0217b34c, s16 *, 0x84) =
            (s16) (M2C_FIELD(&data_0217b34c, s16 *, 0x6E) - M2C_FIELD(&data_0217b34c, s16 *, 0x72));
    }
    if ((s32) M2C_FIELD(&data_0217b34c, s16 *, 0x6C) < (s32) M2C_FIELD(&data_0217b34c, s16 *, 0x70)) {
        M2C_FIELD(&data_0217b34c, s16 *, 0x86) =
            (s16) (M2C_FIELD(&data_0217b34c, s16 *, 0x70) - M2C_FIELD(&data_0217b34c, s16 *, 0x6C));
    } else if ((s32) M2C_FIELD(&data_0217b34c, s16 *, 0x6C) > (s32) M2C_FIELD(&data_0217b34c, s16 *, 0x70)) {
        M2C_FIELD(&data_0217b34c, s16 *, 0x88) =
            (s16) (M2C_FIELD(&data_0217b34c, s16 *, 0x6C) - M2C_FIELD(&data_0217b34c, s16 *, 0x70));
    }
    func_0203baf0(M2C_FIELD(&data_0217b34c, s16 *, 0x6C), M2C_FIELD(&data_0217b34c, s16 *, 0x6E));
}
