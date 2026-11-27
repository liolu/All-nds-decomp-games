#include "m2c.h"

M2C_UNK func_02008b78(M2C_UNK);                     /* extern */
M2C_UNK func_020094e4(M2C_UNK);                     /* extern */
M2C_UNK func_02018344(M2C_UNK);                     /* extern */
M2C_UNK func_020183b0(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK data_020939c0;
extern M2C_UNK data_0209f7a8;
extern void *data_020d1d24;

void func_02032438(void) {
    func_02008b78(0);
    func_020094e4(0);
    func_02018344(0);
    func_020183b0(0, 0xF);
    M2C_FIELD(data_020d1d24, s8 *, 2)         = 0;
    M2C_FIELD(data_020d1d24, s32 *, 0x3CF0)   = 0;
    M2C_FIELD(data_020d1d24, s16 *, 0x3CF4)   = 0;
    M2C_FIELD(data_020d1d24, s16 *, 0x3CF6)   = 0;
    M2C_FIELD(data_020d1d24, s8 *, 0x3CF8)    = 0x1F;
    M2C_FIELD(data_020d1d24, s8 *, 0x3CFB)    = 0;
    M2C_FIELD(data_020d1d24, s16 *, 0x3CFC)   = 0x7FFF;
    M2C_FIELD(data_020d1d24, s8 *, 0x3D00)    = 0x1F;
    M2C_FIELD(data_020d1d24, s32 *, 0x3D04)   = 0;
    M2C_FIELD(data_020d1d24, s16 *, 0x3D08)   = 0;
    M2C_FIELD(data_020d1d24, s16 *, 0x3D0A)   = 0x80;
    M2C_FIELD(data_020d1d24, s8 *, 0x3D0C)    = 0x1F;
    M2C_FIELD(data_020d1d24, s8 *, 0x3D0F)    = 0;
    M2C_FIELD(data_020d1d24, s16 *, 0x3D10)   = 0x7FFF;
    M2C_FIELD(data_020d1d24, s8 *, 0x3D14)    = 0x1F;
    M2C_FIELD(data_020d1d24, u8 *, 0x3CE2)    = (u8) ((u8 *) &data_020939c0)[M2C_FIELD(&data_0209f7a8, u8 *, 0x38)];
    M2C_FIELD(data_020d1d24, s8 *, 0x3CE3)    = 0;
    M2C_FIELD(data_020d1d24, s8 *, 0x3CE4)    = 0;
    M2C_FIELD(data_020d1d24, s8 *, 0x3CE5)    = 0xA;
    M2C_FIELD(data_020d1d24, s8 *, 0x3D1C)    = 0xD;
    M2C_FIELD(data_020d1d24, s8 *, 0x3D1D)    = 0;
    M2C_FIELD(data_020d1d24, s8 *, 0x411C)    = 0;
    M2C_FIELD(data_020d1d24, s8 *, 0x415C)    = 0;
    M2C_FIELD(data_020d1d24, s8 *, 0x419C)    = 0;
    M2C_FIELD(data_020d1d24, s32 *, 0x3D18)   = 0;
    M2C_FIELD(data_020d1d24, void **, 0x3CE8) = (void *) (data_020d1d24 + 0x3D1C);
    M2C_FIELD(data_020d1d24, void **, 0x3CEC) = (void *) (data_020d1d24 + 0x411C);
}
