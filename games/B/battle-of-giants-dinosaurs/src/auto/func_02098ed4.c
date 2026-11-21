#include "m2c.h"

M2C_UNK func_02097a78(void *, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0209892c(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_020b91cc;
extern M2C_UNK data_020bef14;
extern M2C_UNK data_020bf234;
extern M2C_UNK data_020bf654;
extern M2C_UNK data_020bf6b8;

void *func_02098ed4(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r5;

    temp_r5                        = M2C_FIELD(&data_020bef14, s32 *, 0xC);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf6b8;
    func_0209892c(arg0 + 4, 0);
    M2C_FIELD(arg0, s32 *, 0xC)  = temp_r5;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 0x38) = 1;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s8 *, 0x48)  = 0;
    M2C_FIELD(arg0, s8 *, 0x49)  = 0x2F;
    func_02097a78(arg0 + 0x18, arg1, 0x20, 0x20);
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020bf654;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_020bf234;
    M2C_FIELD(arg0, s32 *, 0x50)      = 0;
    M2C_FIELD(arg0, s32 *, 0x54)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &data_020b91cc;
    return arg0;
}
