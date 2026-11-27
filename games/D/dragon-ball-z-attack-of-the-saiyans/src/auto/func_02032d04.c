#include "m2c.h"

M2C_UNK func_02032928(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern void *data_020d1d24;

void func_02032d04(s8 arg0, s32 arg1, M2C_UNK arg2) {
    M2C_FIELD(data_020d1d24, s8 *, 0x3CE4)  = arg0;
    M2C_FIELD(data_020d1d24, s32 *, 0x3D18) = arg1;
    func_02032928(0, 0, arg2, 0x05000000);
    M2C_FIELD(data_020d1d24, void **, 0x3CE8) = (void *) (data_020d1d24 + 0x3D1C);
    M2C_FIELD(data_020d1d24, s8 *, 2)         = 0;
    M2C_FIELD(data_020d1d24, s8 *, 0x3CE0)    = 1;
    M2C_FIELD(data_020d1d24, s8 *, 1)         = 2;
}
