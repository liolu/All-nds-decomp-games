#include "m2c.h"

M2C_UNK func_0209c668(s32, void *);                 /* extern */
s32 func_0209c890(s32, M2C_UNK, s32, M2C_UNK, void *, s32); /* extern */
M2C_UNK func_0209f16c();                            /* extern */
M2C_UNK func_0209f18c(void *, M2C_UNK);             /* extern */
M2C_UNK func_0209f1b8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0209f310(void *, s32, s32);            /* extern */
extern M2C_UNK data_020bf498;
extern M2C_UNK data_020d3cc4;

void *func_0209f25c(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r5;

    func_0209f16c(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf498;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    func_0209f18c(arg0 + 0x14, arg2);
    func_0209f1b8(arg0 + 0x34, arg2);
    M2C_FIELD(arg0, s32 *, 0x58) = arg3;
    func_0209c668(M2C_FIELD(&data_020d3cc4, s32 *, 0x3C), arg0);
    temp_r5 = (arg1 + 0xFFF) & ~0xFFF;
    temp_r0 = func_0209c890(M2C_FIELD(&data_020d3cc4, s32 *, 0x3C), 0, temp_r5, 6, arg0, M2C_FIELD(arg0, s32 *, 0x58));
    func_0209f310(arg0, temp_r0, temp_r0 + temp_r5);
    return arg0;
}
