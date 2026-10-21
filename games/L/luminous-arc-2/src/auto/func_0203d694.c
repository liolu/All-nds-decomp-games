#include "m2c.h"

M2C_UNK func_0203d8c0(s16, s16, s16, s16);          /* extern */
M2C_UNK func_020404b4(s16, s16);                    /* extern */
M2C_UNK func_020cf7f0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_02175c7c;
extern M2C_UNK data_0217b54c;
extern M2C_UNK data_0217b576;
extern M2C_UNK data_0217b578;

s32 func_0203d694(void) {
    s16 temp_r4;
    s16 temp_r5;
    s32 var_r6;

    temp_r4                                = M2C_FIELD(&data_0217b54c, s16 *, 0x2A);
    temp_r5                                = M2C_FIELD(&data_0217b54c, s16 *, 0x2C);
    M2C_FIELD(&data_0217b54c, s16 *, 0x32) = (s16) (M2C_FIELD(&data_0217b54c, s16 *, 0x32) - 7);
    var_r6                                 = 0;
    func_020cf7f0(&data_0217b576, &data_0217b578, &data_02175c7c);
    if ((s32) M2C_FIELD(&data_0217b54c, s16 *, 0x32) < 0) {
        var_r6                                 = 1;
        M2C_FIELD(&data_0217b54c, s16 *, 0x2A) = (s16) M2C_FIELD(&data_0217b54c, s16 *, 0x2E);
        M2C_FIELD(&data_0217b54c, s16 *, 0x2C) = (s16) M2C_FIELD(&data_0217b54c, s16 *, 0x30);
    }
    func_0203d8c0(M2C_FIELD(&data_0217b54c, s16 *, 0x2A), M2C_FIELD(&data_0217b54c, s16 *, 0x2C), temp_r4, temp_r5);
    if (var_r6 == 0) {
        return 0;
    }
    func_020404b4(M2C_FIELD(&data_0217b54c, s16 *, 0x26), M2C_FIELD(&data_0217b54c, s16 *, 0x28));
    return 1;
}
