#include "m2c.h"

M2C_UNK func_02004dfc(M2C_UNK *, M2C_UNK *, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_02005198(M2C_UNK *);                   /* extern */
s32 func_0206d048(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0216fdb8;
extern M2C_UNK data_0216fddc;
extern M2C_UNK func_020710a4;

s32 func_02071024(void) {
    s32 temp_r0;

    temp_r0                                = func_0206d048(0x1000, 0x20);
    M2C_FIELD(&data_0216fdb8, s32 *, 0xE4) = temp_r0;
    if (temp_r0 == 0) {
        return -0x80;
    }
    M2C_FIELD(&data_0216fdb8, s8 *, 5) = 1;
    M2C_FIELD(&data_0216fdb8, s8 *, 9) = 0;
    func_02004dfc(&data_0216fddc, &func_020710a4, 0, M2C_FIELD(&data_0216fdb8, s32 *, 0xE4) + 0x1000, 0x1000,
                  (s32) M2C_FIELD(&data_0216fdb8, u8 *, 0xA));
    func_02005198(&data_0216fddc);
    return 0;
}
