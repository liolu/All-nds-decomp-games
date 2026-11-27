#include "m2c.h"

M2C_UNK func_02032928(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern void *data_020d1d24;

void func_02032d7c(M2C_UNK arg0) {
    M2C_FIELD(data_020d1d24, s8 *, 0x3CE5)  = 0xA;
    M2C_FIELD(data_020d1d24, s32 *, 0x41DC) = 0;
    M2C_FIELD(data_020d1d24, s32 *, 0x41E0) = 0;
    func_02032928(data_020d1d24 + 0x41DC, 0, arg0, 0x05000000);
    M2C_FIELD(data_020d1d24, s8 *, 0x3CE0) = 1;
    M2C_FIELD(data_020d1d24, s8 *, 1)      = 3;
}
