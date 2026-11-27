/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202a98c(void *, M2C_UNK, s32, s32, s32); /* extern */
s32 func_0202a9ec(void *, M2C_UNK, s32, s32);       /* extern */
M2C_UNK func_02092ae0(void *);                      /* extern */
extern M2C_UNK data_02102b70;

void *func_02092b20(void *arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r2;
    void *temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02102b70;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = arg1;
    M2C_FIELD(arg0, s32 *, 0xC)    = arg2;
    M2C_FIELD(arg0, s16 *, 0x10)   = 0;
    M2C_FIELD(arg0, s16 *, 0x12)   = (s16) arg4;
    M2C_FIELD(arg0, s16 *, 0x14)   = 0;
    M2C_FIELD(arg0, void **, 0x18) = arg3;
    M2C_FIELD(arg0, s8 *, 0x1C)    = 0;
    temp_r0                        = M2C_FIELD(arg0, void **, 0x18);
    temp_r2                        = M2C_FIELD(temp_r0, s32 *, 0x698);
    if (temp_r2 == 5) {
        temp_r0_2 = func_0202a9ec(temp_r0, 2, arg1, arg2);
        if (temp_r0_2 == 0x220) {
            M2C_FIELD(arg0, s32 *, 4) = 1;
        }
        if (temp_r0_2 == 0x228) {
            M2C_FIELD(arg0, s32 *, 4) = 2;
        }
        if (temp_r0_2 == 0x238) {
            M2C_FIELD(arg0, s32 *, 4) = 3;
        }
        if (temp_r0_2 == 0x240) {
            M2C_FIELD(arg0, s32 *, 4) = 4;
        }
    } else if (temp_r2 == 7) {
        temp_r0_3 = func_0202a9ec(temp_r0, 2, arg1, arg2);
        if (temp_r0_3 == 0x28) {
            M2C_FIELD(arg0, s32 *, 4) = 5;
        }
        if (temp_r0_3 == 0x30) {
            M2C_FIELD(arg0, s32 *, 4) = 6;
        }
        if (temp_r0_3 == 0x50) {
            M2C_FIELD(arg0, s32 *, 4) = 7;
        }
        if (temp_r0_3 == 0x58) {
            M2C_FIELD(arg0, s32 *, 4) = 8;
        }
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        func_0202a98c(M2C_FIELD(arg0, void **, 0x18), 0, M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), 1);
        func_02092ae0(arg0);
    }
    return arg0;
}
