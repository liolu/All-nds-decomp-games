#include "m2c.h"

M2C_UNK func_020a4bd8();                            /* extern */
extern M2C_UNK data_020b9044;
extern M2C_UNK data_020bf920;
extern M2C_UNK data_020bf95c;

void *func_020a4d18(void *arg0) {
    func_020a4bd8();
    M2C_FIELD(arg0, M2C_UNK **, 8) = &data_020b9044;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf920;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &data_020bf95c;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    return arg0;
}
