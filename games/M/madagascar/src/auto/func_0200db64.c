/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200d5ac(void *, void *, s32);         /* extern */
M2C_UNK func_0203bc34();                            /* extern */
M2C_UNK **func_0207b068(M2C_UNK);                   /* extern */
extern M2C_UNK data_020bd880;
extern M2C_UNK data_020c31d8;
extern M2C_UNK data_020c49c8;

void *func_0200db64(void *arg0, s8 arg1, s32 arg2, void *arg3, s32 arg4, void *arg5) {
    M2C_UNK **temp_r0;
    M2C_UNK **temp_r0_2;
    s32 temp_r2;
    s32 temp_r3;
    s32 temp_r3_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bd880;
    M2C_FIELD(arg0, s8 *, 0x24)    = arg1;
    M2C_FIELD(arg0, s32 *, 0x28)   = arg4;
    M2C_FIELD(arg0, s32 *, 0x2C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x48)   = 0;
    M2C_FIELD(arg0, s32 *, 0x4C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x140)  = arg2;
    M2C_FIELD(arg0, s32 *, 0x144)  = (s32) M2C_FIELD(arg5, s32 *, 4);
    temp_r0                        = func_0207b068(0x10);
    if (temp_r0 != NULL) {
        func_0203bc34();
        *temp_r0 = &data_020c31d8;
    }
    M2C_FIELD(arg0, M2C_UNK ***, 0x44) = temp_r0;
    temp_r0_2                          = func_0207b068(0x10);
    if (temp_r0_2 != NULL) {
        func_0203bc34();
        *temp_r0_2 = &data_020c49c8;
    }
    M2C_FIELD(arg0, M2C_UNK ***, 0x30) = temp_r0_2;
    temp_r2                            = M2C_FIELD(arg3, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x3C)       = (s32) ((s32) (temp_r2 + ((u32) (temp_r2 >> 2) >> 0x1D)) >> 3);
    temp_r3                            = M2C_FIELD(arg3, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x40)       = (s32) ((s32) (temp_r3 + ((u32) (temp_r3 >> 2) >> 0x1D)) >> 3);
    temp_r3_2                          = M2C_FIELD(arg3, s32 *, 0);
    func_0200d5ac(arg0, arg5, (s32) (temp_r3_2 + ((u32) (temp_r3_2 >> 3) >> 0x1C)) >> 4);
    return arg0;
}
