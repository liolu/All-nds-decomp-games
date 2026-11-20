#include "m2c.h"

M2C_UNK func_02004dfc(M2C_UNK *, M2C_UNK *, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_02005198(M2C_UNK *);                   /* extern */
s32 func_0206d048(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0216f3dc;
extern M2C_UNK data_0216fcb8;
extern M2C_UNK data_0216fcf0;
extern M2C_UNK func_0206d358;

s32 func_0206d2c8(void) {
    M2C_FIELD(&data_0216fcb8, s32 *, 0)    = 0;
    M2C_FIELD(&data_0216fcb8, s32 *, 8)    = 0;
    M2C_FIELD(&data_0216fcb8, s8 *, 0x24)  = 0;
    M2C_FIELD(&data_0216fcb8, s8 *, 0x25)  = 0;
    M2C_FIELD(&data_0216fcb8, s32 *, 0x34) = func_0206d048(0x400, 0x10);
    func_02004dfc(&data_0216fcf0, &func_0206d358, 0, M2C_FIELD(&data_0216fcb8, s32 *, 0x34) + 0x400, 0x400,
                  M2C_FIELD(&data_0216f3dc, u8 *, 0x714) + 1);
    func_02005198(&data_0216fcf0);
    return 0;
}
