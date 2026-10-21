#include "m2c.h"

extern M2C_UNK data_021194bc;
extern M2C_UNK data_021194d4;
extern M2C_UNK data_021194e4;
extern M2C_UNK data_02119508;

void func_0206e1a8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_021194e4;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02119508;
    M2C_FIELD(arg0, s32 *, 4)         = 0x736D6420;
    M2C_FIELD(arg0, s32 *, 8)         = 0;
    M2C_FIELD(arg0, s32 *, 0xC)       = -0x40;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_021194bc;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_021194d4;
}
