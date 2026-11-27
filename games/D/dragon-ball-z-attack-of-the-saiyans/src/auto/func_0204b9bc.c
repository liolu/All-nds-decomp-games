#include "m2c.h"

u16 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern void *data_020d1d24;

s32 func_0204b9bc(M2C_UNK arg0) {
    u16 temp_r0;

    temp_r0                                 = func_02012b7c(arg0, 1, 0xF);
    M2C_FIELD(data_020d1d24, u8 *, 0x3C88)  = 0U;
    M2C_FIELD(data_020d1d24, u8 *, 0x3C89)  = 0U;
    M2C_FIELD(data_020d1d24, u8 *, 0x3C90)  = 0U;
    M2C_FIELD(data_020d1d24, u8 *, 0x3C91)  = 0U;
    M2C_FIELD(data_020d1d24, u16 *, 0x3C94) = temp_r0;
    M2C_FIELD(data_020d1d24, u16 *, 0x3C96) = temp_r0;
    if (M2C_FIELD(data_020d1d24, u16 *, 0x3C96) == 0) {
        M2C_FIELD(data_020d1d24, s16 *, 0x3C84) = (s16) (M2C_FIELD(data_020d1d24, u8 *, 0x3C88) << 8);
        M2C_FIELD(data_020d1d24, s16 *, 0x3C86) = (s16) (M2C_FIELD(data_020d1d24, u8 *, 0x3C89) << 8);
        M2C_FIELD(data_020d1d24, s16 *, 0x3C8C) = (s16) (M2C_FIELD(data_020d1d24, u8 *, 0x3C90) << 8);
        M2C_FIELD(data_020d1d24, s16 *, 0x3C8E) = (s16) (M2C_FIELD(data_020d1d24, u8 *, 0x3C91) << 8);
    }
    return 1;
}
