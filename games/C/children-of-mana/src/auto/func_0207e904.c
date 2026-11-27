/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202f8f0(s32, s32, s32);                   /* extern */
M2C_UNK func_0202f948(s32, s32, s32, s32);          /* extern */
void *func_0202f98c(s32, u16);                      /* extern */
extern M2C_UNK data_020ffae8;
extern M2C_UNK data_020ffb10;

void *func_0207e904(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5, s32 arg6) {
    s32 temp_r0;
    u8 temp_r3;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffae8;
    M2C_FIELD(arg0, s32 *, 8)      = arg1;
    M2C_FIELD(arg0, s32 *, 0xC)    = arg2;
    M2C_FIELD(arg0, s16 *, 0x10)   = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = arg4;
    M2C_FIELD(arg0, s8 *, 0x18)    = 0;
    M2C_FIELD(arg0, u8 *, 0x19)    = arg5;
    M2C_FIELD(arg0, s32 *, 0x1C)   = arg6;
    M2C_FIELD(arg0, s32 *, 0x20)   = 0;
    M2C_FIELD(arg0, s32 *, 0x28)   = 0;
    M2C_FIELD(arg0, s32 *, 4)      = arg3;
    M2C_FIELD(arg0, u16 *, 0x12)   = (u16) * ((u16 *) ((s8 *) &data_020ffb10 + (arg3 * 2)));
    if (M2C_FIELD(arg0, s32 *, 4) == 0x47) {
        M2C_FIELD(arg0, u16 *, 0x12) =
            (u16) (func_0202f8f0(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC)) + 1);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 <= 0x19) {
        if ((temp_r0 < 0x19) && (temp_r0 != 3)) {
            goto block_12;
        }
        goto block_10;
    }
    if ((temp_r0 <= 0x21) && (temp_r0 >= 0x20) && ((temp_r0 == 0x20) || (temp_r0 == 0x21))) {
    block_10:
        temp_r3 = M2C_FIELD(func_0202f98c(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, u16 *, 0x12)), u8 *, 0xA);
        if (temp_r3 != 0) {
            func_0202f948(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC),
                          (M2C_FIELD(arg0, u16 *, 0x12) + temp_r3) - 1);
        }
    } else {
    block_12:
        func_0202f948(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), 0);
    }
    return arg0;
}
