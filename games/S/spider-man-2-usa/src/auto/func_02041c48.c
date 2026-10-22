#include "m2c.h"

extern M2C_UNK data_020840c4;
extern M2C_UNK data_02084144;

void func_02041c48(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x44) = &data_02084144;
    M2C_FIELD(arg0, s32 *, 0x4C)      = 9;
    M2C_FIELD(arg0, M2C_UNK **, 0x48) = &data_020840c4;
    M2C_FIELD(arg0, s32 *, 0x50)      = 5;
}
