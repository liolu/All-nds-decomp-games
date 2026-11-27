#include "m2c.h"

M2C_UNK func_02008b78(M2C_UNK);                     /* extern */
M2C_UNK func_020094e4(M2C_UNK);                     /* extern */
M2C_UNK func_02018344(M2C_UNK);                     /* extern */
M2C_UNK func_020183b0(M2C_UNK, M2C_UNK);            /* extern */
extern void *data_020d1d24;

s32 func_02031740(void) {
    func_02008b78(0);
    func_020094e4(0);
    func_02018344(0);
    func_020183b0(0, 0xF);
    M2C_FIELD(data_020d1d24, s32 *, 0x3CF0) = 0;
    M2C_FIELD(data_020d1d24, s32 *, 0x3D04) = 0;
    M2C_FIELD(data_020d1d24, s16 *, 0x3CF4) = 0;
    M2C_FIELD(data_020d1d24, s16 *, 0x3D08) = 0;
    M2C_FIELD(data_020d1d24, s32 *, 0x3D18) = 0;
    M2C_FIELD(data_020d1d24, s8 *, 0x411C)  = 0;
    M2C_FIELD(data_020d1d24, s8 *, 0x415C)  = 0;
    M2C_FIELD(data_020d1d24, s8 *, 0x419C)  = 0;
    return 1;
}
