#include "m2c.h"

u8 func_02012a90(M2C_UNK, M2C_UNK);                 /* extern */
extern void *data_020d1d24;

s32 func_0204b880(M2C_UNK arg0) {
    u8 temp_r0;
    u8 temp_r4;
    u8 temp_r5;
    u8 temp_r6;
    u8 temp_r7;
    u8 temp_r8;

    if (M2C_FIELD(data_020d1d24, u8 *, 6) != 0) {
        return 1;
    }
    temp_r8                                 = func_02012a90(arg0, 1);
    temp_r7                                 = func_02012a90(arg0, 2);
    temp_r6                                 = func_02012a90(arg0, 3);
    temp_r5                                 = func_02012a90(arg0, 4);
    temp_r4                                 = func_02012a90(arg0, 5);
    temp_r0                                 = func_02012a90(arg0, 6);
    M2C_FIELD(data_020d1d24, u8 *, 0x3C88)  = temp_r8;
    M2C_FIELD(data_020d1d24, u8 *, 0x3C89)  = temp_r7;
    M2C_FIELD(data_020d1d24, u8 *, 0x3C90)  = temp_r6;
    M2C_FIELD(data_020d1d24, u8 *, 0x3C91)  = temp_r5;
    M2C_FIELD(data_020d1d24, s16 *, 0x3C94) = (s16) temp_r4;
    M2C_FIELD(data_020d1d24, u16 *, 0x3C96) = (u16) temp_r0;
    if (M2C_FIELD(data_020d1d24, u16 *, 0x3C96) == 0) {
        M2C_FIELD(data_020d1d24, s16 *, 0x3C84) = (s16) (M2C_FIELD(data_020d1d24, u8 *, 0x3C88) << 8);
        M2C_FIELD(data_020d1d24, s16 *, 0x3C86) = (s16) (M2C_FIELD(data_020d1d24, u8 *, 0x3C89) << 8);
        M2C_FIELD(data_020d1d24, s16 *, 0x3C8C) = (s16) (M2C_FIELD(data_020d1d24, u8 *, 0x3C90) << 8);
        M2C_FIELD(data_020d1d24, s16 *, 0x3C8E) = (s16) (M2C_FIELD(data_020d1d24, u8 *, 0x3C91) << 8);
    }
    return 1;
}
